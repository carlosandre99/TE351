library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity display is
	generic (fclk : integer := 50_000_000);
    Port ( 
			  clk : in  STD_LOGIC;
           enable : out  integer range 0 to 4); 
end display;

architecture Behavioral of display is
	constant max_disp : integer := fclk/1000;
begin
	process (clk)
		variable cont : integer range 0 to fclk;
		variable valor_enable : integer range 0 to 4;
	begin
		if(clk'event and clk='1') then
			cont := cont + 1;
			if(cont = max_disp) then
				valor_enable := valor_enable + 1;
				
				if(valor_enable = 4) then
				
					valor_enable := 0;
				end if;
				cont := 0;
				
			end if;
		end if;
		enable <= valor_enable;
	end process;

end Behavioral;