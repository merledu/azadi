# Allow tool override
VERILATOR = verilator
TBDIR = ${AZADI_ROOT}/tests

# Try later (see usage in /home/zain/Documents/Code/tf)
#RTLSRC=../src

# Define test name
TEST = test_1

# Define test name
TEST_DIR = ${TBDIR}/asm
HEX_DIR = ${TBDIR}/hex


TBFILES = $(TBDIR)/azadi_tb.sv
# Package imports

defines =  $(AZADI_ROOT)/src/brq_core/rtl/brq_pkg.sv
defines += $(AZADI_ROOT)/src/TileLink/rtl/tlul_pkg.sv
defines += $(AZADI_ROOT)/src/TileLink/rtl/tl_periph_pkg.sv
defines += $(AZADI_ROOT)/src/TileLink/rtl/tl_main_pkg.sv
defines += $(AZADI_ROOT)/src/GPIO/rtl/gpio_reg_pkg.sv

# CFLAGS for verilator generated Makefiles. Without -std=c++11 it
# complains for `auto` variables
CFLAGS += "-std=c++11"

# Optimization for better performance; alternative is nothing for
# slower runtime (faster compiles) -O2 for faster runtime (slower
# compiles), or -O for balance.
VERILATOR_MAKE_FLAGS = OPT_FAST="-O2"

# Targets
all: clean verilator

clean:
	rm -rf logs *.log *.s *.hex *.dis *.tbl irun* vcs* simv* snapshots \
	verilator* *.exe obj* *.o ucli.key vc_hdrs.h csrc *.csv work


verilator-build: ${TBFILES} sim_main.cpp
	$(VERILATOR) --cc -CFLAGS ${CFLAGS} $(defines) \
	  -I${AZADI_ROOT}/tests -f ${AZADI_ROOT}/tests/flist \
	  -Wno-PINMISSING -Wno-WIDTH -Wno-UNOPTFLAT -Wno-BLKANDNBLK -Wno-ALWCOMBORDER ${TBFILES} --top-module azadi_soc_top \
	  -exe sim_main.cpp --autoflush --trace
	cp ${AZADI_ROOT}/tests/sim_main.cpp obj_dir/
	$(MAKE) -C obj_dir/ -f Vazadi_soc_top.mk $(VERILATOR_MAKE_FLAGS)
	touch verilator-build

verilator: program.hex verilator-build
	./obj_dir/Vazadi_soc_top

program.hex:
	cp ${HEX_DIR}/$(TEST).program.hex program.hex
	cp ${HEX_DIR}/$(TEST).data.hex data.hex