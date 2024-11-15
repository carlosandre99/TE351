library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.AdderPackage.ALL; 

entity SignedAdder is
    Port (
        sw  : in  std_logic_vector(6 downto 0); -- 3 bits para a, 3 bits para b e 1 bit para ci
        led : out std_logic_vector(3 downto 0)  -- 3 bits para sum e 1 bit para co
    );
end SignedAdder;

architecture Behavioral of SignedAdder is
    signal a, b : signed(2 downto 0);
    signal ci : std_logic;
    signal sum : signed(2 downto 0);
    signal co : std_logic;
begin
    --sinais de entrada
    a <= signed(sw(6 downto 4));
    b <= signed(sw(3 downto 1));
    ci <= sw(0);

    process(a, b, ci)
        variable temp_sum : signed(2 downto 0);
        variable temp_co : std_logic;
    begin
        --procedure de adição
        add_signed(a, b, ci, temp_sum, temp_co);
        
        --atribui os resultados temporários aos sinais
        sum <= temp_sum;
        co <= temp_co;
    end process;

    --sinais de saída
    led(3) <= co;
    led(2 downto 0) <= std_logic_vector(sum);
end Behavioral;