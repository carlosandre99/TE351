library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity codigo_principal is
	 generic (fclk : integer := 50_000_000);
					
    Port ( 	rst,clk, pausa, conf : in STD_logic;
				ssd : out  STD_LOGIC_VECTOR (6 downto 0);
				anodo : out  STD_LOGIC_VECTOR (3 downto 0));
end codigo_principal;

architecture Behavioral of codigo_principal is

	component display is
		generic (fclk : integer := 50_000_000);
		Port ( clk : in  STD_LOGIC;
				 enable: out  integer range 0 to 4);
	end component;
	
	component decoder is
    Port ( enable : in  integer range 0 to 4;
           anodo : out  STD_LOGIC_VECTOR (3 downto 0);
           numero_atual : in  integer range 0 to 9;
           ssd : out  STD_LOGIC_VECTOR (6 downto 0));
	end component;
	
	component deb is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           deb : out  STD_LOGIC);
	end component;
	
	signal max_cont : integer range 0 to fclk;
	
	type integer_array is array (0 to 5) of integer range 0 to 10;
	signal numero_atual : integer range 0 to 9;
	signal relogio: integer_array;

	signal enable : integer range 0 to 4;
	
	signal estado_deb : STD_LOGIC;
	


	
begin
	
	max_cont <= fclk;
	
	process(clk,estado_deb,max_cont)
	 
	variable cont : integer range 0 to fclk;
	variable att_relogio: integer_array;

	
	begin
		if(estado_deb = '1') then
			cont := 0;
			att_relogio(0) := 0;
			att_relogio(1) := 0;
			att_relogio(2) := 0;
		   att_relogio(3) := 0;
			att_relogio(4) := 0;
		   att_relogio(5) := 0;
			
			
		elsif(clk'event and clk='1') then
			if (pausa = '0') then
			cont := cont + 1;

			if(cont >= max_cont) then

				att_relogio(0) := att_relogio(0) + 1;
				if(att_relogio(0) = 10) then
				
					att_relogio(0) := 0;
					att_relogio(1) := att_relogio(1) + 1;
					
					if(att_relogio(1) = 6) then
				
						att_relogio(1) := 0;
						att_relogio(2) := att_relogio(2) + 1;
						
						if(att_relogio(2) = 10) then
				
							att_relogio(2) := 0;
						   att_relogio(3) := att_relogio(3) + 1;
							
							if(att_relogio(3) = 6) then
				
							att_relogio(3) := 0;
						   att_relogio(4) := att_relogio(4) + 1;
							
							if(att_relogio(4) = 10) then
							
							att_relogio(4) := 0;
						   att_relogio(5) := att_relogio(5) + 1;
							
							if(att_relogio(5) = 10) then
				
							att_relogio(0) := 0;
							att_relogio(1) := 0;
							att_relogio(2) := 0;
							att_relogio(3) := 0;
							att_relogio(4) := 0;
							att_relogio(5) := 0;

					
							end if; -- 1 digito minutos
						end if; -- 2 digito minutos
					end if;	-- 1 digito segundos		
				end if; -- 2 digito segundos	
				end if;
				end if;
				cont := 0;
			end if;--cont	
       end if; -- pausa			
		end if; -- clk
		
	if (conf = '0') then
	relogio(0) <= att_relogio(0);
	relogio(1) <= att_relogio(1);
	relogio(2) <= att_relogio(2);
	relogio(3) <= att_relogio(3);
	else
	relogio(0) <= att_relogio(2);
	relogio(1) <= att_relogio(3);
	relogio(2) <= att_relogio(4);
	relogio(3) <= att_relogio(5);
	end if;

	end process;

	
	botao : deb port map (rst,clk,estado_deb);
	
	exibicao : display port map (clk,enable);
	
	numero_atual <= relogio(enable);
	
	decodificador : decoder port map(enable,anodo,numero_atual,ssd);	

end Behavioral;
