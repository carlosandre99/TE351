library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_signed.all; --vetor de bits com sinal
use ieee.numeric_std.all; -- opeacoes aritimeticas
----------------------------------------------------------------------------------------
entity hamming is
	 generic(N_ent : positive := 8;
				N_sai : positive := 4);
	 
    Port ( ent     : in    STD_LOGIC_VECTOR (N_ent-1 downto 0);--switch
           ssd     : out   STD_LOGIC_VECTOR (6 downto 0);-- leds display
           A       : out   STD_LOGIC_VECTOR (3 downto 0));--anodo
end hamming;
----------------------------------------------------------------------------------------
architecture Behavioral of hamming is
	signal ssd_s : STD_LOGIC_VECTOR (6 downto 0);
	signal bcd_s : STD_LOGIC_VECTOR (N_sai-1 downto 0);
	type integer_array is array (0 to N_ENT) of integer range 0 to N_ENT;
	signal S: integer_array;
begin
		A <= "1110";
		
		ok: for i in 1 to N_ent GENERATE --loop GENERATE que itera de 1 até N_ent 
		
--Se ent(i-1) for '1' (alto), então S(i) é incrementado em 1 comparado a S(i-1)
--Se ent(i-1) for '0' (baixo), então S(i) permanece igual a S(i-1)
			S(i) <= S(i-1)+1 WHEN ent(i-1) = '1' ELSE S(i-1); 
		END GENERATE ok;
		
		--Converte o valor final do vetor S em bcd
		bcd_s <= STD_LOGIC_VECTOR(to_unsigned(S(N_ent), N_sai));
		
	ssd_s <= "0000001" WHEN bcd_s = "0000" ELSE
         "1001111" WHEN bcd_s = "0001" ELSE
         "0010010" WHEN bcd_s = "0010" ELSE
         "0000110" WHEN bcd_s = "0011" ELSE
         "1001100" WHEN bcd_s = "0100" ELSE
         "0100100" WHEN bcd_s = "0101" ELSE
         "0100000" WHEN bcd_s = "0110" ELSE
         "0001111" WHEN bcd_s = "0111" ELSE
         "0000000" WHEN bcd_s = "1000" ELSE
         "0000100" WHEN bcd_s = "1001" ELSE
         "1111111";

	ssd <= ssd_s; 
end Behavioral;
----------------------------------------------------------------------------------------