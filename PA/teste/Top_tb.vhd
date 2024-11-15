library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Testbench is
end Testbench;

architecture Behavioral of Testbench is
    signal clk : STD_LOGIC := '0';
    signal rst : STD_LOGIC := '0';
    signal random_out : STD_LOGIC_VECTOR (7 downto 0);
    signal seg_num : STD_LOGIC_VECTOR (6 downto 0);
    signal seg_alpha : STD_LOGIC_VECTOR (6 downto 0);
    signal display_num : STD_LOGIC_VECTOR (3 downto 0); -- 4 bits para números
    signal display_alpha : STD_LOGIC_VECTOR (4 downto 0); -- 5 bits para letras

    constant clk_period : time := 20 ns;

    -- Instância do gerador aleatório
    component LFSR_Random_6Bits
        Port ( clk : in STD_LOGIC;
               rst : in STD_LOGIC;
               random_out : out STD_LOGIC_VECTOR (7 downto 0));
    end component;

    -- Instância do conversor Binário para 7 segmentos
    component BinTo7Seg
        Port ( bin : in STD_LOGIC_VECTOR (3 downto 0);
               seg : out STD_LOGIC_VECTOR (6 downto 0));
    end component;

    -- Instância do conversor Alfabeto para 7 segmentos
    component Alfabeto
        Port ( bin : in STD_LOGIC_VECTOR (4 downto 0);
               seg : out STD_LOGIC_VECTOR (6 downto 0));
    end component;

begin
    -- Gerador de clock
    clk_process : process
    begin
        clk <= '0';
        wait for clk_period / 2;
        clk <= '1';
        wait for clk_period / 2;
    end process;

    -- Instância do componente sob teste
    UUT: LFSR_Random_6Bits
        port map (
            clk => clk,
            rst => rst,
            random_out => random_out
        );

    -- Selecionar os 4 bits menos significativos para números
    display_num <= random_out(3 downto 0);
    -- Selecionar os 5 bits menos significativos para letras
    display_alpha <= random_out(4 downto 0);

    -- Instância do conversor Binário para 7 segmentos
    BinTo7Seg_inst: BinTo7Seg
        port map (
            bin => display_num,
            seg => seg_num
        );

    -- Instância do conversor Alfabeto para 7 segmentos
    Alfabeto_inst: Alfabeto
        port map (
            bin => display_alpha,
            seg => seg_alpha
        );

    -- Processo de simulação
    stim_proc: process
    begin
        -- Aplicar reset
        rst <= '1';
        wait for 40 ns;
        rst <= '0';

        -- Coletar os valores gerados por um período de tempo
        wait for 1000 ns;
        wait;
    end process;
end Behavioral;