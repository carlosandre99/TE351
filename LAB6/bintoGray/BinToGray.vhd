library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity BinToGray is
    Generic (N : integer := 8); 
    Port ( 
        binary_in : in  STD_LOGIC_VECTOR(N-1 downto 0);
        gray_out  : out STD_LOGIC_VECTOR(N-1 downto 0)
    );
end BinToGray;

architecture Behavioral of BinToGray is

    function BinToGrayFunc(bin : STD_LOGIC_VECTOR) return STD_LOGIC_VECTOR is
        variable gray : STD_LOGIC_VECTOR(bin'range);
    begin
        for i in bin'range loop
            if i = bin'high then
                gray(i) := bin(i); 
            else
                gray(i) := bin(i+1) xor bin(i); 
            end if;
        end loop;
        return gray;
    end function;

begin

    process(binary_in)
    begin
        gray_out <= BinToGrayFunc(binary_in);
    end process;
end Behavioral;

