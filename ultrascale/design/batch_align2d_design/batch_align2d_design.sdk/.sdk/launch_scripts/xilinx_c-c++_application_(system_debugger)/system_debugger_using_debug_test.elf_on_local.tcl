connect -url tcp:127.0.0.1:3121
source /opt/Xilinx/SDK/2018.3/scripts/sdk/util/zynqmp_utils.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent JTAG-SMT2NC 210308A474F1"} -index 1
loadhw -hw /home/davide/Desktop/BatchAlign2D/design/batch_align2d_design/batch_align2d_design.sdk/design_1_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x80000000 0xbfffffff} {0x400000000 0x5ffffffff} {0x1000000000 0x7fffffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent JTAG-SMT2NC 210308A474F1"} -index 1
source /home/davide/Desktop/BatchAlign2D/design/batch_align2d_design/batch_align2d_design.sdk/design_1_wrapper_hw_platform_0/psu_init.tcl
psu_init
catch {psu_protection}
targets -set -nocase -filter {name =~"*A53*0" && jtag_cable_name =~ "Digilent JTAG-SMT2NC 210308A474F1"} -index 1
rst -processor
dow /home/davide/Desktop/BatchAlign2D/design/batch_align2d_design/batch_align2d_design.sdk/test/Debug/test.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~"*A53*0" && jtag_cable_name =~ "Digilent JTAG-SMT2NC 210308A474F1"} -index 1
con
