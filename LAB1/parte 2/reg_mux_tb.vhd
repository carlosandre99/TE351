LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
----------------------------------------------------------------------
ENTITY reg_mux_tb IS
END reg_mux_tb;
----------------------------------------------------------------------
 ARCHITECTURE testbench OF reg_mux_tb IS  
    COMPONENT reg_mux
    PORT(
         a, b, c, d : IN  std_logic;
         sel : IN  std_logic_vector(1 downto 0);
         clk : IN  std_logic;
         x, y : OUT  std_logic);
    END COMPONENT;
 
   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';
   signal d : std_logic := '0';
   signal sel : std_logic_vector(1 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal x : std_logic;
   signal y : std_logic;
 
BEGIN
    dut: reg_mux PORT MAP (
          a => a,
          b => b,
          c => c,
          d => d,
          sel => sel,
          clk => clk,
          x => x,
          y => y);

  -- Stimulus process
   clk <= not clk after 40ns;
	a <= '1' after 80ns, '0' after 640 ns; 
	b <= '1' after 240ns;
	c <= '1' after 400ns;
	d <= '1' after 560ns;
	sel <= "01" after 160ns,
			 "10" after 320ns,
			 "11" after 480ns,
			 "00" after 640ns;

END architecture;
----------------------------------------------------------------------