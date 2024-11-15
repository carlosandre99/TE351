LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
----------------------------------------------------------
ENTITY decoder_tb IS
END decoder_tb;
----------------------------------------------------------
ARCHITECTURE behavior OF decoder_tb IS  
    COMPONENT decoder
    PORT(
         bcd : IN  std_logic_vector(3 downto 0);
         ssd : OUT  std_logic_vector(6 downto 0));
    END COMPONENT;

   --Inputs
   signal bcd : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal ssd : std_logic_vector(6 downto 0) := (others => '0');
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: decoder PORT MAP (
          bcd => bcd,
          ssd => ssd);

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		bcd <= "0000"; --0
      wait for 100 ns;	
	   bcd <= "0001"; --1
		wait for 100 ns;	
		bcd <= "0010"; --2
		wait for 100 ns;	
		bcd <= "0011"; --3
		wait for 100 ns;	
		bcd <= "0100"; --4
		wait for 100 ns;	
		bcd <= "0101"; --5
		wait for 100 ns;	
		bcd <= "0110"; --6
		wait for 100 ns;	
		bcd <= "0111"; --7
		wait for 100 ns;	
		bcd <= "1000"; --8
		wait for 100 ns;	
		bcd <= "1001"; --9
		wait for 100 ns;
      -- insert stimulus here 
      wait;
   end process;

END;
----------------------------------------------------------