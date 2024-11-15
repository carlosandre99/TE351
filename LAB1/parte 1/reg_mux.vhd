library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
---------------------------------------------------------------
entity reg_mux is
    Port ( a, b, c, d : in  STD_LOGIC_VECTOR (3 DOWNTO 0);
           sel : in  STD_LOGIC_VECTOR (1 DOWNTO 0);
           clk : in  STD_LOGIC;
           x, y  : out  STD_LOGIC_VECTOR (3 DOWNTO 0));
         
end reg_mux;
-----------------------------------------------------------------
architecture Behavioral of reg_mux is
   SIGNAL mux : STD_LOGIC_VECTOR (3 DOWNTO 0);
begin
mux <= a when sel="00" else
       b when sel="01" else
       c when sel="10" else
       d;
x<= mux;
process (clk)
  begin 
    if (clk'event and clk='1') then
	    y<=mux;
		 end if;
		  end process;
end Behavioral;
--------------------------------------------------------------------
