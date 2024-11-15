LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
------------------------------------------------------------------------------
ENTITY circuito_aritmetico_tb IS
END circuito_aritmetico_tb;
------------------------------------------------------------------------------
ARCHITECTURE behavior OF circuito_aritmetico_tb IS 
  
    COMPONENT circuito_aritmetico
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         opcode : IN  std_logic_vector(2 downto 0);
         y : OUT  std_logic_vector(3 downto 0);
         cin : IN  std_logic;
         cout : OUT  std_logic);
    END COMPONENT;

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal opcode : std_logic_vector(2 downto 0) := (others => '0');
   signal cin : std_logic := '0';

 	--Outputs
   signal y : std_logic_vector(3 downto 0);
   signal cout : std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: circuito_aritmetico PORT MAP (
          a => a,
          b => b,
          opcode => opcode,
          y => y,
          cin => cin,
          cout => cout);

   -- Stimulus process
   stim_proc: process
   begin		
	opcode <= "000";
			a <= "0000";
			b <= "1111";
			wait for 25 ns;
			a <= "1100";
			b <= "1111";
			wait for 25 ns;
			a <= "1010";
			b <= "0000";
			wait for 25 ns;
			a <= "0000";
			b <= "1011";
			wait for 25 ns;
			a <= "0100";
			b <= "1010";
			wait for 25 ns;
			
	opcode <= "001";
			a <= "0000";
			b <= "1111";
			wait for 25 ns;
			a <= "1100";
			b <= "1111";
			wait for 25 ns;
			a <= "1010";
			b <= "0000";
			wait for 25 ns;
			a <= "0000";
			b <= "1011";
			wait for 25 ns;
			a <= "0100";
			b <= "1010";
			wait for 25 ns;
			
	opcode <= "010";
			a <= "0000";
			b <= "1111";
			wait for 25 ns;
			a <= "1100";
			b <= "1111";
			wait for 25 ns;
			a <= "1010";
			b <= "0000";
			wait for 25 ns;
			A <= "0000";
			b <= "1011";
			wait for 25 ns;
			A <= "0100";
			b <= "1010";
			wait for 25 ns;
			
	opcode <= "011";
			a <= "0000";
			b <= "1111";
			wait for 25 ns;
			a <= "1100";
			b <= "1111";
			wait for 25 ns;
			a <= "1010";
			b <= "0000";
			wait for 25 ns;
			A <= "0000";
			b <= "1011";
			wait for 25 ns;
			A <= "0100";
			b <= "1010";
			wait for 25 ns;
			
	opcode <= "100";
			a <= "0000";
			b <= "1111";
			wait for 25 ns;
			a <= "1100";
			b <= "1111";
			wait for 25 ns;
			a <= "1010";
			b <= "0000";
			wait for 25 ns;
			a <= "0000";
			b <= "1011";
			wait for 25 ns;
			a <= "0100";
			b <= "1010";
			wait for 25 ns;
			
	opcode <= "101";
			a <= "0000";
			b <= "1111";
			wait for 25 ns;
			a <= "1100";
			b <= "1111";
			wait for 25 ns;
			a <= "1010";
			b <= "0000";
			wait for 25 ns;
			a <= "0000";
			b <= "1011";
			wait for 25 ns;
			a <= "0100";
			b <= "1010";
			wait for 25 ns;
			
	opcode <= "110";
			a <= "0000";
			b <= "1111";
			wait for 25 ns;
			a <= "1100";
			b <= "1111";
			wait for 25 ns;
			a <= "1010";
			b <= "0000";
			wait for 25 ns;
			a <= "0000";
			b <= "1011";
			wait for 25 ns;
			a <= "0100";
			b <= "1010";
			wait for 25 ns;
			
	opcode <= "111";
			a <= "0000";
			b <= "1111";
			wait for 25 ns;
			a <= "1100";
			b <= "1111";
			wait for 25 ns;
			a <= "1010";
			B <= "0000";
			wait for 25 ns;
			a <= "0000";
			b <= "1011";
			wait for 25 ns;
			a <= "0100";
			b <= "1010";
			wait for 25 ns;
      wait;
   end process;

END;
------------------------------------------------------------------------------