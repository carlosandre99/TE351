library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity debounce is
    generic(freqclk : integer := 50000;
    twindow : integer := 100);
    Port( entrada : in std_logic;
          clk: in std_logic;
          saida : out std_logic);
end debounce;

architecture Behavioral of debounce is 
    signal temp : std_logic :='0';
    signal flag : std_logic :='0';
    constant max : integer :=freqclk*twindow;

begin
process (clk)
   variable count : integer range 0 to max;
   begin
      if (clk'event and clk ='1') then 
         if (temp /= entrada) then
             count := count + 1;
             if (count = max) then
                 temp <= entrada;
                 count := 0;
                 -- flag <=0;
             end if; 
          else
            count := 0;
          end if;
       end if;
end process;
saida <= temp;
end Behavioral;