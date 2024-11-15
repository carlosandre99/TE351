LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY codigo_principal_tb IS
END codigo_principal_tb;
 
ARCHITECTURE behavior OF codigo_principal_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT codigo_principal
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         pausa : IN  std_logic;
         conf : IN  std_logic;
         ssd : OUT  std_logic_vector(6 downto 0);
         anodo : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal pausa : std_logic := '0';
   signal conf : std_logic := '0';

 	--Outputs
   signal ssd : std_logic_vector(6 downto 0);
   signal anodo : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 120 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: codigo_principal PORT MAP (
          rst => rst,
          clk => clk,
          pausa => pausa,
          conf => conf,
          ssd => ssd,
          anodo => anodo
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		

        conf <= '1';
        wait for 400 ns;
        conf <= '0';
        
        pausa <= '1';
        wait for 50 ns;
        pausa <= '0';
        wait for 100 ns;
		  pausa <= '1';

      wait;
   end process;

END;
