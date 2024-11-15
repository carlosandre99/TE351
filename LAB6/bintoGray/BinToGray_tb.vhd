library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity BinToGray_tb is
end BinToGray_tb;

architecture Behavioral of BinToGray_tb is

    -- Sinal para a entrada binária e saída Gray
    signal binary_in : STD_LOGIC_VECTOR(7 downto 0);
    signal gray_out  : STD_LOGIC_VECTOR(7 downto 0);

    -- Componente da unidade sob teste (UUT)
    component BinToGray is
        Generic (N : integer := 8);
        Port (
            binary_in : in  STD_LOGIC_VECTOR(N-1 downto 0);
            gray_out  : out STD_LOGIC_VECTOR(N-1 downto 0)
        );
    end component;

begin

    -- Instanciação da unidade sob teste
    UUT: BinToGray
        Port map (
            binary_in => binary_in,
            gray_out  => gray_out
        );

    -- Processo de estimulação
    stim_proc: process
    begin
   
        binary_in <= "10010100";
        wait for 200 ns;
   
        binary_in <= "00010101";
        wait for 200 ns;
 
        binary_in <= "01011010";
        wait for 200 ns;

        binary_in <= "11000011";
        wait for 200 ns;

        binary_in <= "00100001";
        wait for 200 ns;

        wait;
    end process;

end Behavioral;