# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VAzadi_top_verilator.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 4
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 1
# Tracing threaded output mode?  0/1 (from --trace-fst-thread)
VM_TRACE_THREADED = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VAzadi_top_verilator \
	VAzadi_top_verilator___024unit \
	VAzadi_top_verilator_tlul_socket_m1__pi7 \
	VAzadi_top_verilator_gpio_reg_pkg \
	VAzadi_top_verilator_rv_plic_reg_pkg \
	VAzadi_top_verilator_uart_reg_pkg \
	VAzadi_top_verilator_rv_timer_reg_pkg \
	VAzadi_top_verilator_tlul_fifo_sync__RC0_RD0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VAzadi_top_verilator__Dpi \
	VAzadi_top_verilator__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VAzadi_top_verilator__Syms \
	VAzadi_top_verilator__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
