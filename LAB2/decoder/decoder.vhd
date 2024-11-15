library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
----------------------------------------------------------
entity decoder is
    Port ( bcd : in  STD_LOGIC_VECTOR (3 downto 0); --entrada dec (0 ate 9)
           ssd : out  STD_LOGIC_VECTOR (6 downto 0); --saida sete seg (a ate g)
           s : out  STD_LOGIC_VECTOR (3 downto 0)); --anodo
end decoder;
----------------------------------------------------------
architecture Behavioral of decoder is
 signal ssd_s : STD_LOGIC_VECTOR (6 downto 0); 
-- signal notssd = sinal intermediario que 
-- armazena o valor calculado com base na entrada bdc
   begin
	s <= "1110";
ssd_s <= "0000001" WHEN bcd = "0000" ELSE
         "1001111" WHEN bcd = "0001" ELSE
         "0010010" WHEN bcd = "0010" ELSE
         "0000110" WHEN bcd = "0011" ELSE
         "1001100" WHEN bcd = "0100" ELSE
         "0100100" WHEN bcd = "0101" ELSE
         "0100000" WHEN bcd = "0110" ELSE
         "0001111" WHEN bcd = "0111" ELSE
         "0000000" WHEN bcd = "1000" ELSE
         "0000100" WHEN bcd = "1001" ELSE
         "1111111";

		ssd <= ssd_s; 

end Behavioral;
----------------------------------------------------------