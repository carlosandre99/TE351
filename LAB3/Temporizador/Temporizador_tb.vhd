LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY Temporizador_tb IS
END Temporizador_tb;
 
ARCHITECTURE behavior OF Temporizador_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Temporizador
    PORT(
         ena : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         cont : OUT  std_logic_vector(3 downto 0);
         dig : OUT  std_logic_vector(6 downto 0);
         anod0 : OUT  std_logic;
         anod1 : OUT  std_logic;
         anod2 : OUT  std_logic;
         anod3 : OUT  std_logic);
    END COMPONENT;
    
   --Inputs
   signal ena : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal cont : std_logic_vector(3 downto 0);
   signal dig : std_logic_vector(6 downto 0);
   signal anod0 : std_logic;
   signal anod1 : std_logic;
   signal anod2 : std_logic;
   signal anod3 : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Temporizador PORT MAP (
          ena => ena,
          clk => clk,
          rst => rst,
          cont => cont,
          dig => dig,
          anod0 => anod0,
          anod1 => anod1,
          anod2 => anod2,
          anod3 => anod3);

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
    rst <= '1';
			wait for 100 ns;
			rst <= '0';
			ena <= '1';
			wait for 100 ns;
			ena <= '0';
	rst <= '0';
			wait for 100 ns;
			rst <= '1';
			ena <= '0';
			wait for 100 ns;
			ena <= '1';
      
      -- insert stimulus here 
      wait;
   end process;

END;