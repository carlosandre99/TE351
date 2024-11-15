LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY Contador_tb IS
END Contador_tb;
 
ARCHITECTURE behavior OF Contador_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Contador
    PORT(
         ena : IN  std_logic;
         clk : IN  std_logic;
         bt : IN  std_logic;
         rst : IN  std_logic;
         rev : IN  std_logic;
         saida : OUT  std_logic_vector(3 downto 0);
         dig : OUT  std_logic_vector(3 downto 0);
         led : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ena : std_logic := '0';
   signal clk : std_logic := '0';
   signal bt : std_logic := '0';
   signal rst : std_logic := '0';
   signal rev : std_logic := '0';

 	--Outputs
   signal saida : std_logic_vector(3 downto 0);
   signal dig : std_logic_vector(3 downto 0);
   signal led : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Contador PORT MAP (
          ena => ena,
          clk => clk,
          bt => bt,
          rst => rst,
          rev => rev,
          saida => saida,
          dig => dig,
          led => led
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
      wait for 5 ms;	
		
		--Contagem Crescente
		rev <= '1';
		--Ativa a contagem
		ena <= '1'; 
		
		--Debounce contagem
		bt <= '1'; wait for 1 ms;bt <= '0'; wait for 1 ms;
		bt <= '1'; wait for 1 ms;bt <= '0'; wait for 1 ms;
		
		-- rst
		rst <= '1'; wait for 1 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		rst <= '0'; wait for 1 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		
		--Contagem Crescente
		rev <= '1';
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		
		ena <= '0'; 
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		
		ena <= '1'; 
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		
		--Decrescente
		rev <= '0';
	   bt <= '1'; wait for 9 ms; bt <= '0'; wait for 9 ms;
		bt <= '1'; wait for 9 ms; bt <= '0'; wait for 9 ms;
		bt <= '1'; wait for 9 ms; bt <= '0'; wait for 9 ms;
		bt <= '1'; wait for 9 ms; bt <= '0'; wait for 9 ms;
		bt <= '1'; wait for 9 ms; bt <= '0'; wait for 9 ms;
		bt <= '1'; wait for 9 ms; bt <= '0'; wait for 9 ms;
		
		--incrementa contagem
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;
		bt <= '1'; wait for 10 ms; bt <= '0'; wait for 10 ms;


      wait;
   end process;

END;
