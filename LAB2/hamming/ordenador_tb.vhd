LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ordenador_tb IS
END ordenador_tb;
 
ARCHITECTURE behavior OF ordenador_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT hamming
    PORT(
         ent : IN  std_logic_vector(7 downto 0);
         bcd : OUT  std_logic_vector(3 downto 0);
         ssd : OUT  std_logic_vector(6 downto 0);
         A : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ent : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal bcd : std_logic_vector(3 downto 0);
   signal ssd : std_logic_vector(6 downto 0);
   signal A : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: hamming PORT MAP (
          ent => ent,
          bcd => bcd,
          ssd => ssd,
          A => A
        );


 

   -- Stimulus process
   stim_proc: process
   begin		


      wait;
   end process;

END;
