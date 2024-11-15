library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.numeric_std.ALL;

entity Contador is
              generic (fclk: integer :=50_000;     
				  twindow: integer := 10); 
    Port ( ena, clk, bt, rst, rev : in  STD_LOGIC; 
			  saida : out  STD_LOGIC_VECTOR (3 downto 0); 
           dig : out  STD_LOGIC_VECTOR (3 downto 0); 
           led : out  STD_LOGIC_VECTOR (6 downto 0)); 
end Contador;

architecture Behavioral of Contador is

      SIGNAL Y: INTEGER RANGE 0 TO 9 := 0; 
	   signal temp: std_logic := '0'; 
	   constant max: integer := fclk*twindow; 
		signal saida_s : STD_LOGIC_VECTOR (3 downto 0);
		signal deb : std_logic;
begin
dig <= "1110";
	
	process(clk)
	variable cont: integer range 0 to max; 
	begin
		if(clk'event and clk='1') then
			if(temp /= bt) then
				cont:= cont + 1; 
				if(cont = max) then
					temp <= bt; 
					cont := 0; 
				end if;
			else
				cont := 0;
			end if;
		end if;
	end process;
	
	deb <= temp; 
	
	PROCESS(deb,rst)
		
		variable y_aux : INTEGER RANGE 0 TO 10 := 0; 
		
		begin
			
			if (rst = '1') then
				y_aux := 0; 
			
			elsif (deb'EVENT and deb='1')then
			 IF (ena = '1')THEN
       		
					if(rev = '1') then
							y_aux := y_aux - 1; 
							if (y_aux = 0) then
									y_aux := 10;
								end if;
						else
							y_aux := y_aux + 1; 
							if (y_aux = 10) then
									y_aux := 0; 
								end if;
						end if;
					END IF;
			end if;
		
		Y <= y_aux; 
		saida_s <= conv_std_logic_vector(Y,4);
	
	end PROCESS;
	
	
	with saida_s select
	
			     led <= "0000001" when "0000",
							"1001111" when "0001",
							"0010010" when "0010",
							"0000110" when "0011",
							"1001100" when "0100",
							"0100100" when "0101",
							"0100000" when "0110",
							"0001111" when "0111",
							"0000000" when "1000",
							"0000100" when "1001", 
							"0000001" when OTHERS;
saida <= saida_s;

end Behavioral;