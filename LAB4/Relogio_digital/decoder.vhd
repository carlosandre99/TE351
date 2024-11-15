library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decoder is
    Port ( enable : in  integer range 0 to 4; 
           anodo: out  STD_LOGIC_VECTOR (3 downto 0);
           numero_atual : in  integer range 0 to 9;
           ssd : out  STD_LOGIC_VECTOR (6 downto 0));
end decoder;

architecture Behavioral of decoder is
begin

	anodo <=   "1110"	WHEN enable = 0 ELSE
				  "1101" WHEN enable = 1 ELSE
				  "1011" WHEN enable = 2 ELSE
				  "0111";
	
	ssd	 <= "0000001" WHEN numero_atual = 0 ELSE
				 "1001111" WHEN numero_atual = 1 ELSE
				 "0010010" WHEN numero_atual = 2 ELSE
				 "0000110" WHEN numero_atual = 3 ELSE
				 "1001100" WHEN numero_atual = 4 ELSE
				 "0100100" WHEN numero_atual = 5 ELSE
				 "0100000" WHEN numero_atual = 6 ELSE
				 "0001111" WHEN numero_atual = 7 ELSE
				 "0000000" WHEN numero_atual = 8 ELSE
				 "0000100" WHEN numero_atual = 9 ELSE
				 "0110000";
				 
end Behavioral;