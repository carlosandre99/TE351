library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.all;
use ieee.std_logic_unsigned.all;

entity Temporizador is
    Port ( ena, clk, rst : in  STD_LOGIC; 
           cont : out  STD_LOGIC_VECTOR (3 downto 0); 
           dig : out  STD_LOGIC_VECTOR (6 downto 0); 
           anod0, anod1, anod2, anod3 : out  STD_LOGIC); 
end Temporizador;

architecture Behavioral of Temporizador is

begin
	
	process(rst,clk)
	
	variable temp: natural range 0 to 9 := 0; 
	variable clk_seg: natural range 0 to (25_000_000) := 0; 
	-- 0,5 segundos = clock*20ns
	begin
		if(rst = '1') then 
				temp := 0;
				clk_seg := 0;
				
		elsif (clk'event and clk='1') then
			IF (ena = '1' )then
				if(clk_seg = 25_000_000) then
					temp := temp + 1;
					clk_seg := 0;
						if(temp = 10) then
							temp := 0;
						end if;
														
				else
					clk_seg := clk_seg + 1;
				end if;
			end if;
		end if;
			
			anod0 <= '1'; 
			anod1 <= '1';
			anod2 <= '1';
			anod3 <= '0';
			
			case temp is -- Início do caso baseado no valor da variável 'temp'

					when 0 => dig <="0000001"; -- quando 'temp' for 0, atribui "0000001" à porta de saída 'dig'
					when 1 => dig  <="1001111"; -- e assim por diante
					when 2 => dig  <="0010010";
					when 3 => dig  <="0000110";
					when 4 => dig  <="1001100";
					when 5 => dig  <="0100100";
					when 6 => dig  <="0100000";
					when 7 => dig  <="0001111";
					when 8 => dig  <="0000000";
					when 9 => dig  <="0000100";
					when others => dig  <="0110000";

			end case;
		
		end process;


end Behavioral;