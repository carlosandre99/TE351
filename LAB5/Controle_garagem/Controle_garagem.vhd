library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
----------------------------------------------------------------

entity Controle_garagem is
		generic(t1   : integer := 30; --time de espera
				  fclk : integer := 50_000_000); --50 MHZ
			  
    Port ( clk 			: in 	 STD_LOGIC;	
			  rst			   : in 	 STD_LOGIC;
			  remote			: in 	 STD_LOGIC;
			  aberto			: in 	 STD_LOGIC;
           fechado      : in   STD_LOGIC;
			  direcao      : out  STD_LOGIC;
           ligar        : out  STD_LOGIC);
end Controle_garagem;
----------------------------------------------------------------
architecture Behavioral of Controle_garagem is
component debounce is
    generic(freqclk : integer := 50000;
            twindow : integer := 100);
    Port( entrada : in std_logic;
          clk: in std_logic;
          saida : out std_logic);
end component;
----------------------------------------------------------------
	type my_states is (s_aberto, s_fechado, s_movendo, s_parado); -- vetor de estados
	signal pr_state, nx_state: my_states; -- variaves de estado
	signal remote_debounced: std_logic;
	signal direcao_s : std_logic;
----------------------------------------------------------------
begin
debounce_inst: debounce GENERIC MAP (fclk, t1) port map (remote,clk,remote_debounced);

------------------Lower section----------------------------
	process (rst,clk) -- muda o estado da maquina de estados
	begin
		if(rst = '1') then	-- se rst for 1 vai para idle
			pr_state <= s_fechado;
		elsif(clk'event and clk = '1') then
			pr_state <= nx_state; -- atualiza o estado
		end if;
	end process;		
------------------Upper section --------------------------------
	
	process(clk,pr_state)
		constant max_timer1 : integer := fclk*t1;--contador de 30 segundos
		
		variable cont : integer;			-- conta o tempo
		
	begin

		if(clk'event and clk = '1') then
		CASE pr_state is		--case da maquina de estados
		-- ************
			when s_aberto => -- estado de idle
			
				ligar <= '0';
				--direcao_s <= '1';
				
				if(remote = '1') then
					ligar <= '1';
					direcao_s <= '1';
					nx_state <= s_movendo;
				end if;
				
				cont := cont + 1;      
				if(cont = max_timer1) then
				   ligar <= '1';
					direcao_s <= '1';
					nx_state <= s_movendo;
				end if;
				
		--***********
			when s_fechado =>
				ligar <= '0';
				--direcao_s <= '0';
				
				if(remote = '1') then
	           ligar <= '1'; 
				  direcao_s <= '0';
				  nx_state <= s_movendo;
				end if;

		--***********
			when s_movendo =>
				ligar <= '1';
				cont := 0;
				
				if (direcao_s = '0' and aberto = '1') then 
					nx_state <= s_aberto;
				end if;
				
				if (direcao_s = '1' and fechado = '1') then 
					nx_state <= s_fechado;
				end if;
				
				if (remote = '1') then
				   ligar <= '1';
					nx_state <= s_parado;
				end if;
		--***********
			when s_parado =>
			
				ligar <= '0';
				
				if(remote = '1') then
				   ligar <= '1';
					direcao_s <= not direcao_s;
					nx_state <= s_movendo;					
				end if;

				cont := cont + 1;
				if(cont = max_timer1) then
				   ligar <= '1';
				   direcao_s <= '1';
					nx_state <= s_movendo;
				end if;				
		--***********			
		end case;
		end if;
	end process;
direcao <= direcao_s;
end Behavioral;
