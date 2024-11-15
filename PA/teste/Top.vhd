library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Top is
    Port (
        clk : in STD_LOGIC;
        rst : in STD_LOGIC;
        sw : in STD_LOGIC;
        seg : out STD_LOGIC_VECTOR (6 downto 0);
        an : out STD_LOGIC_VECTOR (3 downto 0)
    );
end Top;

architecture Behavioral of Top is
    signal random_num : STD_LOGIC_VECTOR (7 downto 0);
    signal display_num : STD_LOGIC_VECTOR (4 downto 0);
    signal displayed_value : STD_LOGIC_VECTOR (4 downto 0); -- Novo sinal para armazenar o valor mostrado no display
    signal slow_clk : STD_LOGIC;
    signal counter : INTEGER := 0;
    signal btn_counter : INTEGER := 0;
    signal btn_last_state : STD_LOGIC := '0';
    signal btn_edge_detected : STD_LOGIC := '0';
    constant DIVISOR : INTEGER := 5000000; -- Assume um clock de 50 MHz e divisor para 1 segundo
	-- type my_states is (inicio,jogando,final);
	 --signal pr_state, nx_state : my_states;
	 --signal jogar, fim : STD_LOGIC;
	 
	
    -- Declaração das instâncias dos componentes
    component Alfabeto
        Port (
            bin : in STD_LOGIC_VECTOR (4 downto 0);
            seg : out STD_LOGIC_VECTOR (6 downto 0)
        );
    end component;

    component BinTo7Seg
        Port (
            bin : in STD_LOGIC_VECTOR (3 downto 0);
            seg : out STD_LOGIC_VECTOR (6 downto 0)
        );
    end component;

    -- Instâncias dos componentes
    signal Alfabeto_seg : STD_LOGIC_VECTOR (6 downto 0);
    signal BinTo7Seg_seg : STD_LOGIC_VECTOR (6 downto 0);

begin
    -- Instância do LFSR
    LFSR_inst : entity work.LFSR_Random_6Bits
        port map (
            clk => slow_clk,
            rst => rst,
            random_out => random_num
        );

    -- Selecionar os 5 bits menos significativos do número aleatório
    display_num <= random_num(7 downto 3);

    -- Instâncias dos componentes (fora do processo)
    Alfabeto_inst : Alfabeto
        port map (
            bin => displayed_value,
            seg => Alfabeto_seg
        );

    BinToSeg_inst : BinTo7Seg
        port map (
            bin => displayed_value(3 downto 0),
            seg => BinTo7Seg_seg
        );
		  
--		Mensagens_inst : entity work.Mensagens
--        port map (
--            clk => slow_clk,
--            rst => rst,
--            anode => an,
--				display => seg
--        );

--Tentativa de implemntar as mensagens "TE351 - STOP" e "FIM DE JOGO" atravez de uma maquina de estados

--		process(rst, clk)
--		begin
--		if (rst='1') then
--		pr_state <= inicio;
--		elsif(rising_edge(clk)) then
--		pr_state <=nx_state;
--		end if;
--		end process;
--		
--		process(clk,pr_state)
--		begin 
--		if rising_edge(clk) then
--		case pr_state is
--		when inicio =>
--		jogar <= '0';
--		if (sw1='1') then
--		nx_state <=jogando;
--		end if;
--		
--		when jogando =>
--		jogar <= '1';
--		if (fim = '1') then
--		nx_state <=final;
--		end if;
--		
--		when final =>
--		
--		if(rst='1') then
--		fim <= '0';
--		nx_state<=inicio;
--		end if;
--		end case;
--	end if;
--	end process;
			
		   -- Selecionar qual instância usar com base no contador de pressões do botão
	
    process(btn_counter, displayed_value)
    begin
       -- if jogar = '1' then
		  if btn_counter < 6 then
            seg <= BinTo7Seg_seg;
        elsif btn_counter > 5 and btn_counter < 18 then
            seg <= Alfabeto_seg;
        else
			--	fim <= '1';
            seg <= "1111111"; -- Desligar o display
       -- end if;
		  end if;
    end process;

    -- Ativar apenas um display de 7 segmentos (assumindo anodos comuns)
    an <= "1110";  -- Ativar o primeiro display, dependendo do seu hardware

    -- Processo para gerar o clock lento
    process(clk, rst)
    begin
        if rst = '1' then
            counter <= 0;
            slow_clk <= '0';
        elsif rising_edge(clk) then
            if counter = DIVISOR - 1 then
                counter <= 0;
                slow_clk <= not slow_clk;
            else
                counter <= counter + 1;
            end if;
        end if;
    end process;

    -- Detecção de borda de subida do botão
    process(clk, rst)
    begin
        if rst = '1' then
            btn_last_state <= '0';
            btn_edge_detected <= '0';
        elsif rising_edge(clk) then
            if sw = '1' and btn_last_state = '0' then
                btn_edge_detected <= '1';
            else
                btn_edge_detected <= '0';
            end if;
            btn_last_state <= sw;
        end if;
    end process;

    -- Atualizar o valor do display quando o botão for pressionado
    process(clk, rst)
    begin
        if rst = '1' then
            displayed_value <= (others => '0');
        elsif rising_edge(clk) then
            if btn_edge_detected = '1' then
                displayed_value <= display_num;
            end if;
        end if;
    end process;

    -- Contador de pressões do botão
    process(clk, rst)
    begin
        if rst = '1' then
            btn_counter <= 0;
        elsif rising_edge(clk) then
            if btn_edge_detected = '1' then
                if btn_counter = 18 then
                    btn_counter <= 0; -- Resetar
                else
                    btn_counter <= btn_counter + 1;
                end if;
            end if;
        end if;
    end process;
end Behavioral;