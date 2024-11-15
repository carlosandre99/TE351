library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

package AdderPackage is
    procedure add_signed(
        a   : in  signed;
        b   : in  signed;
        ci  : in  std_logic;
        sum : out signed;
        co  : out std_logic
    );
end AdderPackage;

package body AdderPackage is
    procedure add_signed(
        a   : in  signed;
        b   : in  signed;
        ci  : in  std_logic;
        sum : out signed;
        co  : out std_logic
    ) is
        variable temp_sum : signed(a'length downto 0); 
    begin
	--soma dos operandos a, b e carry_in, com redimensionamento para considerar o carry
        temp_sum := resize(a, a'length + 1) + resize(b, b'length + 1) + ('0'&ci);
        sum := temp_sum(a'length - 1 downto 0);
        co := temp_sum(a'length); 
    end procedure;
end AdderPackage;