#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/tools/Xilinx/SDK/2019.1/bin:/tools/Xilinx/Vivado/2019.1/bin
else
  PATH=/tools/Xilinx/SDK/2019.1/bin:/tools/Xilinx/Vivado/2019.1/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/davide/FPGA-design/svo_align2d_design/svo_align2d_design.runs/design_1_zynq_ultra_ps_e_0_7_synth_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado -log design_1_zynq_ultra_ps_e_0_7.vds -m64 -product Vivado -mode batch -messageDb vivado.pb -notrace -source design_1_zynq_ultra_ps_e_0_7.tcl
