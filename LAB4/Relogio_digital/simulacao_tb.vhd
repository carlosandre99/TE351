LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY simulacao_tb IS
END simulacao_tb;
 
ARCHITECTURE behavior OF simulacao_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT codigo_principal
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         pausa : IN  std_logic;
         vel : IN  std_logic_vector(1 downto 0);
         ssd : OUT  std_logic_vector(6 downto 0);
         anodo : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal pausa : std_logic := '0';
   signal vel : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal ssd : std_logic_vector(6 downto 0);
   signal anodo : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: codigo_principal PORT MAP (
          rst => rst,
          clk => clk,
          pausa => pausa,
          vel => vel,
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
      -- hold reset state for 100 ns.
      wait for 100 ns;

      -- insert stimulus here

		rst <= '0';
		vel <= "00";
		wait for 400 ns;
		--rst <= '1';
		--wait for 600 ns;
		--rst <= '0';
      wait;
   end process;

END;