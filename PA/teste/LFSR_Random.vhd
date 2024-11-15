library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity LFSR_Random_6Bits is
    Port ( clk : in STD_LOGIC;
           rst : in STD_LOGIC;
           random_out : out STD_LOGIC_VECTOR (7 downto 0));
end LFSR_Random_6Bits;

architecture Behavioral of LFSR_Random_6Bits is
    signal lfsr : STD_LOGIC_VECTOR (7 downto 0) := "00101001";
begin
    process(clk, rst)
    begin
        if rst = '1' then
            lfsr <= "00101001";
        elsif rising_edge(clk) then
            lfsr <= lfsr(6 downto 0) & (lfsr(7) xor lfsr(6));
        end if;
    end process;

    random_out <= lfsr;
end Behavioral;