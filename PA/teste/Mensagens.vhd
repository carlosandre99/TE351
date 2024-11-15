library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Mensagens is
	generic ( f: integer := 4000; -- Tempo de multiplexao
				 l: integer := 25000000); -- Clock de rolagem do display
	port ( clk, reset: in std_logic; -- Clock, Reset
	       display: out std_logic_vector (6 downto 0); -- Segmentos dos displays (catodos)
			 anode: out std_logic_vector (3 downto 0);
			 pr_state: in states); 
		 
end Mensagens;

architecture Behavioral of Mensagens is
	signal i: integer range 0 to 3 := 3; -- Ponteiro de multiplexao dos displays
	signal j: integer range 0 to 12 := 12; -- Ponteiro para rolagem da mensagem
	signal count_f: integer range 0 to f := f; -- Contador de rolagem
	signal count_l: integer range 0 to l := l; -- Contador de multiplexao
	constant anodos: enable := ("0111","1011","1101","1110"); -- Modos dos anodos
	constant projeto_aplic: pa_stop := ("1110000","0110000","0000110","0100100","1001111","1111111","1111110",
	"1111111","0100100","1110000","0000001","0011000"); -- Mensagem "TE351 - STOP"	
	constant gameover: final := ("0111000","1001111","0001001","1111111","1000010","0110000","1111111",
	"1000011","0000001","0100000","0000001"); -- Mensagem ""FIM DE JOGO"

begin
	process(clk, reset, pr_state, i, j)
	begin
		
		if ( reset='1' ) then
			i<=3;
			j<=12;
			count_l<=l;
			count_f<=f;
		
		elsif ( rising_edge(clk) ) then
			count_f<=count_f-1;
			count_l<=count_l-1;
			if (count_f=0) then
				count_f<=f;
				i<=i-1;
				if (i=0) then
					i<=3;
				end if;
			end if;
			if (count_l=0) then
				count_l<=l;
				j<=j-1;
				if (j=0) then
					j<=12;
				end if;
			end if;	
		end if;

		case pr_state is
			
				when idle =>  display <= projeto_aplic(i+j);
								 
			   when final => display <= gameover(i);
				
				
				when others => display <= "1111111";
									
		end case;
								 
		-- Atribuicao aos anodos do modo atual para multiplexao
		anode <= anodos(i);
	
	end process;

end Behavioral;