# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VAzadi_top_verilator.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 4
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VAzadi_top_verilator \
	VAzadi_top_verilator__1 \
	VAzadi_top_verilator__2 \
	VAzadi_top_verilator__3 \
	VAzadi_top_verilator__4 \
	VAzadi_top_verilator__5 \
	VAzadi_top_verilator__6 \
	VAzadi_top_verilator___024unit \
	VAzadi_top_verilator_tlul_socket_m1__pi7 \
	VAzadi_top_verilator_gpio_reg_pkg \
	VAzadi_top_verilator_rv_plic_reg_pkg \
	VAzadi_top_verilator_uart_reg_pkg \
	VAzadi_top_verilator_i2c_reg_pkg \
	VAzadi_top_verilator_rv_timer_reg_pkg \
	VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VAzadi_top_verilator__Slow \
	VAzadi_top_verilator__1__Slow \
	VAzadi_top_verilator__2__Slow \
	VAzadi_top_verilator__3__Slow \
	VAzadi_top_verilator__4__Slow \
	VAzadi_top_verilator__5__Slow \
	VAzadi_top_verilator___024unit__Slow \
	VAzadi_top_verilator_tlul_socket_m1__pi7__Slow \
	VAzadi_top_verilator_gpio_reg_pkg__Slow \
	VAzadi_top_verilator_rv_plic_reg_pkg__Slow \
	VAzadi_top_verilator_uart_reg_pkg__Slow \
	VAzadi_top_verilator_i2c_reg_pkg__Slow \
	VAzadi_top_verilator_rv_timer_reg_pkg__Slow \
	VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VAzadi_top_verilator__Dpi \
	VAzadi_top_verilator__Trace \
	VAzadi_top_verilator__Trace__1 \
	VAzadi_top_verilator__Trace__2 \
	VAzadi_top_verilator__Trace__3 \
	VAzadi_top_verilator__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VAzadi_top_verilator__Syms \
	VAzadi_top_verilator__Trace__Slow \
	VAzadi_top_verilator__Trace__1__Slow \
	VAzadi_top_verilator__Trace__2__Slow \
	VAzadi_top_verilator__Trace__3__Slow \
	VAzadi_top_verilator__Trace__4__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
