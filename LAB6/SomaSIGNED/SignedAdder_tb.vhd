library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity SignedAdder_tb is
end SignedAdder_tb;

architecture Behavioral of SignedAdder_tb is
    -- Component declaration for the Unit Under Test (UUT)
    component SignedAdder
        Port (
            sw  : in  std_logic_vector(6 downto 0);
            led : out std_logic_vector(3 downto 0)
        );
    end component;

    -- Signals to connect to UUT
    signal sw  : std_logic_vector(6 downto 0) := (others => '0');
    signal led : std_logic_vector(3 downto 0);

begin
    -- Instantiate the Unit Under Test (UUT)
    uut: SignedAdder Port map (
        sw => sw,
        led => led
    );

    -- Stimuli process
    stim_proc: process
    begin
       
        sw <= "0000010"; -- a = 000, b = 001, ci = 0
        wait for 200 ns;
        -- sum = 001, co = 0
      
        sw <= "0110100"; -- a = 011, b = 010, ci = 0
        wait for 200 ns;      
        -- sum = 101, co = 0 (3 + 2 = 5)

        sw <= "1111111"; -- a = 111, b = 111, ci = 1
        wait for 200 ns; 
        --sum = 101, co = 1 (-1 + -1 + 1 = -1)

        sw <= "0110111"; -- a = 011, b = 011, ci = 1
        wait for 200 ns;        
        --sum = 111, co = 1 (3 + 3 + 1 = 7)

        sw <= "1001100"; -- a = 100, b = 110, ci = 0
        wait for 200 ns;
        --sum = 010, co = 1 (-4 + -2 = -6)
        
        wait;
    end process;
end Behavioral;