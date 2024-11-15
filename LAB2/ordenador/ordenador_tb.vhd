LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ordenador_tb IS
END ordenador_tb;
 
ARCHITECTURE behavior OF ordenador_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ordenador
    PORT(
         ent : IN  std_logic_vector(7 downto 0);
         ssd : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ent : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal ssd : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ordenador PORT MAP (
          ent => ent,
          ssd => ssd
        );

   -- Stimulus process
   stim_proc: process
   begin		
      ent <= "00000000" after 000ns,
				 "00000001" after 100ns,
				 "00000011" after 200ns,
				 "00000111" after 300ns,
				 "00001111" after 400ns,
				 "00011111" after 500ns,
				 "11111100" after 600ns,
				 "01111110" after 700ns,
				 "11111110" after 800ns,
				 "11111111" after 900ns;

      wait;
   end process;

END;
