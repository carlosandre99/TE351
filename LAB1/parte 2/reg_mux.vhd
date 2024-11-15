library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
------------------------------------------------------------------
entity reg_mux is
    Port ( a, b, c, d : in  STD_LOGIC;
           sel : in  STD_LOGIC_VECTOR (1 downto 0);
           clk : in  STD_LOGIC;
           x, y : out  STD_LOGIC);
end reg_mux;
-------------------------------------------------------------------
architecture Behavioral of reg_mux is
   signal mux: std_logic;

begin
   mux <= a when sel="00" else
          b when sel="01" else
          c when sel="10" else
			 d;
	x <= mux;
PROCESS (clk)
   BEGIN
	   IF (clk'EVENT AND clk='1') THEN
		   y <= mux;
		 END IF;
		END PROCESS;
end architecture;
-------------------------------------------------------------------

