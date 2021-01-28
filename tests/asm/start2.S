.section ".text.init"
.globl _start

_start:
li  x1, 0
li  x2, 0
li  x3, 0
li  x4, 0
li  x5, 0
li  x6, 0
li  x7, 0
li  x8, 0
li  x9, 0
li  x10,0
li  x11,0
li  x12,0
li  x13,0
li  x14,0
li  x15,0
li  x16,0
li  x17,0
li  x18,0
li  x19,0
li  x20,0
li  x21,0
li  x22,0
li  x23,0
li  x24,0
li  x25,0
li  x26,0
li  x27,0
li  x28,0
li  x29,0
li  x30,0
li  x31,0

# initialize global pointer
.option push
.option norelax
la gp, __global_pointer$
.option pop

init_bss:
    /* init bss section */
    la	a0, __bss_start
    la	a1, __bss_end-4 /* section end is actually the start of the next section */
    li	a2, 0x0
  1:
    sw		a2, 0(a0)
    bgeu	a0, a1, init_sbss
    addi	a0, a0, 4
    j	        1b

init_sbss:
    /* init bss section */
    la	a0, __sbss_start
    la	a1, __sbss_end-4 /* section end is actually the start of the next section */
    li	a2, 0x0
   1:
    sw		a2, 0(a0)
    bgeu	a0, a1, 1f
    addi	a0, a0, 4
    j	        1b

1:
# initialize stack pointer
.option push
.option norelax
la sp, __stack_pointer$
.option pop



