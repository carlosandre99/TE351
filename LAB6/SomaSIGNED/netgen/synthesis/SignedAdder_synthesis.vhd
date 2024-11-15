--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: SignedAdder_synthesis.vhd
-- /___/   /\     Timestamp: Wed Jun 12 14:58:28 2024
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm SignedAdder -w -dir netgen/synthesis -ofmt vhdl -sim SignedAdder.ngc SignedAdder_synthesis.vhd 
-- Device	: xc3s500e-5-fg320
-- Input file	: SignedAdder.ngc
-- Output file	: C:\Users\Carlos\Desktop\SomaSIGNED\SomaSIGNED\SomaSIGNED\netgen\synthesis\SignedAdder_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: SignedAdder
-- Xilinx	: C:\Xilinx\14.7\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity SignedAdder is
  port (
    led : out STD_LOGIC_VECTOR ( 3 downto 0 ); 
    sw : in STD_LOGIC_VECTOR ( 6 downto 0 ) 
  );
end SignedAdder;

architecture Structure of SignedAdder is
  signal Madd_temp_sum0_add0000C : STD_LOGIC; 
  signal Madd_temp_sum0_add0000R : STD_LOGIC; 
  signal Madd_temp_sum0_add0000_Madd_xor_2_11 : STD_LOGIC; 
  signal Madd_temp_sum0_add0000_Madd_xor_2_111_4 : STD_LOGIC; 
  signal N2 : STD_LOGIC; 
  signal N3 : STD_LOGIC; 
  signal led_0_OBUF_11 : STD_LOGIC; 
  signal led_1_OBUF_12 : STD_LOGIC; 
  signal led_2_OBUF_13 : STD_LOGIC; 
  signal led_3_OBUF_14 : STD_LOGIC; 
  signal sw_0_IBUF_22 : STD_LOGIC; 
  signal sw_1_IBUF_23 : STD_LOGIC; 
  signal sw_2_IBUF_24 : STD_LOGIC; 
  signal sw_3_IBUF_25 : STD_LOGIC; 
  signal sw_4_IBUF_26 : STD_LOGIC; 
  signal sw_5_IBUF_27 : STD_LOGIC; 
  signal sw_6_IBUF_28 : STD_LOGIC; 
  signal Madd_temp_sum0_add0000_Madd_cy : STD_LOGIC_VECTOR ( 1 downto 1 ); 
begin
  Madd_temp_sum0_add0000R1 : LUT3
    generic map(
      INIT => X"96"
    )
    port map (
      I0 => sw_0_IBUF_22,
      I1 => sw_5_IBUF_27,
      I2 => sw_2_IBUF_24,
      O => Madd_temp_sum0_add0000R
    );
  Madd_temp_sum0_add0000C1 : LUT3
    generic map(
      INIT => X"E8"
    )
    port map (
      I0 => sw_2_IBUF_24,
      I1 => sw_5_IBUF_27,
      I2 => sw_0_IBUF_22,
      O => Madd_temp_sum0_add0000C
    );
  sw_6_IBUF : IBUF
    port map (
      I => sw(6),
      O => sw_6_IBUF_28
    );
  sw_5_IBUF : IBUF
    port map (
      I => sw(5),
      O => sw_5_IBUF_27
    );
  sw_4_IBUF : IBUF
    port map (
      I => sw(4),
      O => sw_4_IBUF_26
    );
  sw_3_IBUF : IBUF
    port map (
      I => sw(3),
      O => sw_3_IBUF_25
    );
  sw_2_IBUF : IBUF
    port map (
      I => sw(2),
      O => sw_2_IBUF_24
    );
  sw_1_IBUF : IBUF
    port map (
      I => sw(1),
      O => sw_1_IBUF_23
    );
  sw_0_IBUF : IBUF
    port map (
      I => sw(0),
      O => sw_0_IBUF_22
    );
  led_3_OBUF : OBUF
    port map (
      I => led_3_OBUF_14,
      O => led(3)
    );
  led_2_OBUF : OBUF
    port map (
      I => led_2_OBUF_13,
      O => led(2)
    );
  led_1_OBUF : OBUF
    port map (
      I => led_1_OBUF_12,
      O => led(1)
    );
  led_0_OBUF : OBUF
    port map (
      I => led_0_OBUF_11,
      O => led(0)
    );
  Madd_temp_sum0_add0000_Madd_xor_1_11 : LUT4
    generic map(
      INIT => X"1E78"
    )
    port map (
      I0 => sw_1_IBUF_23,
      I1 => sw_4_IBUF_26,
      I2 => Madd_temp_sum0_add0000R,
      I3 => sw_0_IBUF_22,
      O => led_1_OBUF_12
    );
  Madd_temp_sum0_add0000_Madd_cy_1_11 : LUT4
    generic map(
      INIT => X"A880"
    )
    port map (
      I0 => Madd_temp_sum0_add0000R,
      I1 => sw_1_IBUF_23,
      I2 => sw_4_IBUF_26,
      I3 => sw_0_IBUF_22,
      O => Madd_temp_sum0_add0000_Madd_cy(1)
    );
  Madd_temp_sum0_add0000_Madd_xor_0_11 : LUT3
    generic map(
      INIT => X"96"
    )
    port map (
      I0 => sw_1_IBUF_23,
      I1 => sw_4_IBUF_26,
      I2 => sw_0_IBUF_22,
      O => led_0_OBUF_11
    );
  Madd_temp_sum0_add0000_Madd_xor_3_11 : MUXF5
    port map (
      I0 => N2,
      I1 => N3,
      S => sw_6_IBUF_28,
      O => led_3_OBUF_14
    );
  Madd_temp_sum0_add0000_Madd_xor_3_11_F : LUT4
    generic map(
      INIT => X"188E"
    )
    port map (
      I0 => sw_3_IBUF_25,
      I1 => sw_0_IBUF_22,
      I2 => Madd_temp_sum0_add0000C,
      I3 => Madd_temp_sum0_add0000_Madd_cy(1),
      O => N2
    );
  Madd_temp_sum0_add0000_Madd_xor_3_11_G : LUT4
    generic map(
      INIT => X"D4BD"
    )
    port map (
      I0 => Madd_temp_sum0_add0000C,
      I1 => sw_0_IBUF_22,
      I2 => sw_3_IBUF_25,
      I3 => Madd_temp_sum0_add0000_Madd_cy(1),
      O => N3
    );
  Madd_temp_sum0_add0000_Madd_xor_2_111 : LUT4
    generic map(
      INIT => X"9669"
    )
    port map (
      I0 => Madd_temp_sum0_add0000C,
      I1 => sw_0_IBUF_22,
      I2 => sw_3_IBUF_25,
      I3 => Madd_temp_sum0_add0000_Madd_cy(1),
      O => Madd_temp_sum0_add0000_Madd_xor_2_11
    );
  Madd_temp_sum0_add0000_Madd_xor_2_112 : LUT4
    generic map(
      INIT => X"6996"
    )
    port map (
      I0 => Madd_temp_sum0_add0000C,
      I1 => sw_0_IBUF_22,
      I2 => sw_3_IBUF_25,
      I3 => Madd_temp_sum0_add0000_Madd_cy(1),
      O => Madd_temp_sum0_add0000_Madd_xor_2_111_4
    );
  Madd_temp_sum0_add0000_Madd_xor_2_11_f5 : MUXF5
    port map (
      I0 => Madd_temp_sum0_add0000_Madd_xor_2_111_4,
      I1 => Madd_temp_sum0_add0000_Madd_xor_2_11,
      S => sw_6_IBUF_28,
      O => led_2_OBUF_13
    );

end Structure;

