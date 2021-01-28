# Directory
TBDIR = ${AZADI_ROOT}/tests
TEST_DIR = ${TBDIR}/asm
HEX_DIR = ${TBDIR}/hex

# Try later (see usage in /home/zain/Documents/Code/tf)
#RTLSRC=../src

# Define test name
TEST = add

# Constants
RISCV_PREFIX = riscv32-unknown-elf-
GCC_PREFIX = $(RISCV_PREFIX)gcc
GCC_FLAGS = -march=rv32i -mabi=ilp32 -mcmodel=medany -std=gnu99
LINK_FLAGS = -march=rv32i -mabi=ilp32 -static -nostdlib -nostartfiles -lm -lgcc -T $(TEST_DIR)/link.ld
OBJDUMP_PREFIX = $(RISCV_PREFIX)objdump
OBJDUMP_FLAGS = --disassemble-all --disassemble-zeroes 
#--section=.text --section=.text.startup --section=.text.init --section=.data
VERILATOR = verilator

TBFILES = $(AZADI_ROOT)/src/azadi_soc/rtl/azadi_soc_top.sv
# Package imports

defines =  $(AZADI_ROOT)/src/brq_core/rtl/brq_pkg.sv
defines += $(AZADI_ROOT)/src/TileLink/rtl/tlul_pkg.sv
defines += $(AZADI_ROOT)/src/TileLink/rtl/tl_periph_pkg.sv
defines += $(AZADI_ROOT)/src/TileLink/rtl/tl_main_pkg.sv
defines += $(AZADI_ROOT)/src/GPIO/rtl/gpio_reg_pkg.sv
defines += $(AZADI_ROOT)/src/primitives/rtl/prim_pkg.sv


# CFLAGS for verilator generated Makefiles. Without -std=c++11 it
# complains for `auto` variables
CFLAGS += "-std=c++11"

# Optimization for better performance; alternative is nothing for
# slower runtime (faster compiles) -O2 for faster runtime (slower
# compiles), or -O for balance.
VERILATOR_MAKE_FLAGS = OPT_FAST="-O2"

# Targets
all: clean build verilator

clean:
	rm -rf logs *.log *.s *.hex *.dis *.tbl irun* vcs* simv* snapshots \
	verilator* *.exe obj* *.o ucli.key vc_hdrs.h csrc *.csv work


verilator-build: ${TBFILES} sim_main.cpp
	$(VERILATOR) --cc -CFLAGS ${CFLAGS} $(defines) \
	  -I${AZADI_ROOT}/tests -f ${AZADI_ROOT}/tests/flist \
	  -Wno-PINMISSING -Wno-MODDUP -Wno-WIDTH -Wno-UNOPTFLAT -Wno-BLKANDNBLK -Wno-ALWCOMBORDER ${TBFILES} --top-module azadi_soc_top \
	  -exe sim_main.cpp --autoflush --trace
	$(MAKE) -C obj_dir/ -f Vazadi_soc_top.mk $(VERILATOR_MAKE_FLAGS)
	touch verilator-build

verilator: verilator-build
	./obj_dir/Vazadi_soc_top

build:
	@rm -rf $(TEST_DIR)/output 
	@mkdir $(TEST_DIR)/output
	$(GCC_PREFIX) $(GCC_FLAGS) -c $(TEST_DIR)/$(TEST).c -o $(TEST_DIR)/output/$(TEST) -lm -lgcc
	$(GCC_PREFIX) $(LINK_FLAGS) $(TEST_DIR)/start.S $(TEST_DIR)/output/$(TEST) -o $(TEST_DIR)/output/$(TEST).merl 
	$(OBJDUMP_PREFIX) $(OBJDUMP_FLAGS) $(TEST_DIR)/output/$(TEST).merl > $(TEST_DIR)/output/$(TEST).dump
	$(RISCV_PREFIX)elf2hex --bit-width 32 --input $(TEST_DIR)/output/$(TEST).merl --output $(TEST_DIR)/output/program.hex
