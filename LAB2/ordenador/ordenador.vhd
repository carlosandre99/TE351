library ieee;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_signed.all; --vetor de bits com sinal
use ieee.numeric_std.all; -- operacoes aritimeticas
------------------------------------------------------------------------
entity ordenador is
	 generic(N_ent : positive := 8;
				N_sai : positive := 4);
    Port ( ent : in  STD_LOGIC_VECTOR (N_ent-1 downto 0);
           ssd : out  STD_LOGIC_VECTOR (7 downto 0));
end ordenador;
------------------------------------------------------------------------
architecture Behavioral of ordenador is
	type integer_array is array (0 to N_ENT) of integer range 0 to N_ENT;
	signal S: integer_array;
	signal bcd_s : STD_LOGIC_VECTOR (N_sai-1 downto 0);
begin
		
		ok: for i in 1 to N_ent GENERATE
			S(i) <= S(i-1)+1 WHEN ent(i-1) = '1' ELSE S(i-1);
		END GENERATE ok;
		
		bcd_s <= STD_LOGIC_VECTOR(to_unsigned(S(N_ent), N_sai));
		
	
	ssd <= "00000000" WHEN bcd_s = "0000" ELSE
			 "10000000" WHEN bcd_s = "0001" ELSE
			 "11000000" WHEN bcd_s = "0010" ELSE
			 "11100000" WHEN bcd_s = "0011" ELSE
			 "11110000" WHEN bcd_s = "0100" ELSE
			 "11111000" WHEN bcd_s = "0101" ELSE
			 "11111100" WHEN bcd_s = "0110" ELSE
			 "11111110" WHEN bcd_s = "0111" ELSE
			 "11111111" WHEN bcd_s = "1000"	ELSE
			 "00000000";

end Behavioral;
------------------------------------------------------------------------