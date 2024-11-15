library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Alfabeto is
    Port ( bin : in STD_LOGIC_VECTOR (4 downto 0);
           seg : out STD_LOGIC_VECTOR (6 downto 0));
end Alfabeto;

architecture Behavioral of Alfabeto is
begin
    process(bin)
    begin
        case bin is
            when "00000" => seg <= "0001000"; -- A
            when "00001" => seg <= "1100000"; -- B
            when "00010" => seg <= "0110001"; -- C
            when "00011" => seg <= "1000010"; -- D
            when "00100" => seg <= "0110000"; -- E
            when "00101" => seg <= "0111000"; -- F
            when "00110" => seg <= "0100000"; -- G
            when "00111" => seg <= "0011000"; -- H
            when "01000" => seg <= "1001111"; -- I
            when "01001" => seg <= "1000011"; -- J
            when "01010" => seg <= "1010000"; -- K
            when "01011" => seg <= "1110001"; -- L
            when "01100" => seg <= "0001001"; -- M
            when "01101" => seg <= "1101010"; -- N
            when "01110" => seg <= "0000001"; -- O
            when "01111" => seg <= "0011000"; -- P
            when "10000" => seg <= "0001100"; -- Q
            when "10001" => seg <= "1111010"; -- R
            when "10010" => seg <= "0100100"; -- S
            when "10011" => seg <= "1110000"; -- T
            when "10100" => seg <= "1000001"; -- U
            when "10101" => seg <= "1100011"; -- V
            when "10110" => seg <= "0000110"; -- W
            when "10111" => seg <= "1001001"; -- X
            when "11000" => seg <= "1001100"; -- Y
            when "11001" => seg <= "0010010"; -- Z
            when "11010" => seg <= "0001000"; 
				when "11011" => seg <= "1100000";
				when "11100" => seg <= "0110001";
				when "11101" => seg <= "1000010";
				when "11110" => seg <= "1001111";
				when "11111" => seg <= "1010000";
				when others => seg <= "1111111";
        end case;
    end process;
end Behavioral;
