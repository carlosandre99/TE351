LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
  
ENTITY Controle_garagem_tb IS
END Controle_garagem_tb;
 
ARCHITECTURE behavior OF Controle_garagem_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Controle_garagem
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         remote : IN  std_logic;
         aberto : IN  std_logic;
         fechado : IN  std_logic;
         direcao : INOUT  std_logic;
         ligar : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal remote : std_logic := '0';
   signal aberto : std_logic := '0';
   signal fechado : std_logic := '0';

	--BiDirs
   signal direcao : std_logic;

 	--Outputs
   signal ligar : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Controle_garagem PORT MAP (
          clk => clk,
          rst => rst,
          remote => remote,
          aberto => aberto,
          fechado => fechado,
          direcao => direcao,
          ligar => ligar
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
    rst <= '0';
	 wait for 100ns;

	 
	 aberto <= '0';
	 fechado <= '1';
	 remote <= '0';
	 wait for 100ns;
	 
	 aberto <= '0';
	 fechado <= '0';
	 remote <= '1';
	 wait for 100ns;
	 
	 aberto <= '1';
	 fechado <= '0';
	 remote <= '0';
	 wait for 100ns;
	 
	 aberto <= '0';
	 fechado <= '1';
	 remote <= '1';
	 wait for 100ns;

    aberto <= '0';
	 fechado <= '0';
	 remote <= '1';
	 wait for 100ns;

      wait;
   end process;

END;
