library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_STD.ALL;
---------------------------------------------------------------------------
entity circuito_aritmetico is
	generic (N : integer := 4);
    Port ( a : in  STD_LOGIC_VECTOR (N-1 downto 0); --a e b são entradas representando números em formato STD_LOGIC_VECTOR com tamanho N.  
           b : in  STD_LOGIC_VECTOR (N-1 downto 0);
           opcode : in  STD_LOGIC_VECTOR (2 downto 0);--opcode é uma entrada representando o código de operação de 3 bits.
           y : out  STD_LOGIC_VECTOR (N-1 downto 0); --y é uma saída que representa o resultado da operação, também como um STD_LOGIC_VECTOR com tamanho N.
           cin : in  STD_LOGIC; --cin é uma entrada que representa a entrada de carry (vai ser usada para operações de soma com carry).
           cout : out  STD_LOGIC); -- cout é uma saída que representa a saída de carry (para operações de soma com carry).
end circuito_aritmetico;
---------------------------------------------------------------------------
architecture Behavioral of circuito_aritmetico is
--sinais intermediarios que serão usados nas operações.
	signal a_u : unsigned (N-1 downto 0);
	signal b_u : unsigned (N-1 downto 0);
	signal a_s : signed (N-1 downto 0);
	signal b_s : signed (N-1 downto 0);
	signal saida : std_logic_vector(N downto 0);
begin
--Os sinais a e b são convertidos em valores signed (com sinal) e unsigned (sem sinal).
	a_s <= signed(a); 
	b_s <= signed(b);
	a_u <= unsigned(a);
	b_u <= unsigned(b);
	
	with opcode select
		saida <= 
			std_logic_vector(('0' & a_u) + ('0' & b_u)) when "000", --A concatenação(&)é feita para garantir que a_u e b_u 
			std_logic_vector(('0' & a_u) - ('0' & b_u)) when "001",-- tenham o mesmo número de bits, uma vez que eles serão somados.
			std_logic_vector(('0' & b_u) - ('0' & a_u)) when "010",
			std_logic_vector(('0' & a_u) + ('0' & b_u) + ('0' & cin)) when "011",
			
			std_logic_vector((a_s(N-1) & a_s) + (b_s(1) & b_s)) when "100",
			std_logic_vector((a_s(N-1) & a_s) - (b_s(1) & b_s)) when "101",
			std_logic_vector((b_s(N-1) & b_s) - (a_s(1) & a_s)) when "110",
			std_logic_vector((a_s(N-1) & a_s) + (b_s(1) & b_s) + ('0' & cin)) when others;
			
--O resultado da operação é colocado nas saídas y (que contém os N bits menos significativos) e Cout (que contém o bit de carry mais significativo).
		y <= saida(N-1 downto 0);
		cout <= saida(N);

end Behavioral;
---------------------------------------------------------------------------