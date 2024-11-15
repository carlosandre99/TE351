library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity deb is
    Port ( rst, clk : in  STD_LOGIC;
           deb : out  STD_LOGIC);
end deb;

architecture Behavioral of deb is

	constant max_cont : integer := 50_000_000;
begin

	process(clk,rst)
		variable cont : integer range 0 to max_cont;
	begin
		if(clk'event and clk='1') then
			if(rst = '1') then 
				cont := cont + 1;
				if(cont = max_cont) then
					cont := 0;
					deb <= '1';
				end if;
			elsif(rst ='0') then
				deb <= '0';
				cont := 0;
			end if;
		end if;
	end process;
end Behavioral;