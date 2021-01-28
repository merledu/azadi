OUTPUT_ARCH( "riscv" )
ENTRY(_start)
SECTIONS
{
  . = 0x10000000;
  .text.init : { *(.text.init) }
  .tohost ALIGN(0x1000) : { *(.tohost) }
  .text : { *(.text) }
  .rodata : {
       __rodata_start = .;
       *(.rodata)
       *(.rodata.*)
       *(.gnu.linkonce.r.*)
       __rodata_end = .;
 }
  .sdata : {
    __global_pointer$ = . + 0x000;
    *(.srodata.cst16) *(.srodata.cst8) *(.srodata.cst4) *(.srodata.cst2) *(.srodata*)
    *(.sdata .sdata.* .gnu.linkonce.s.*)
  }
  .sbss : {
    __sbss_start = .;
    *(.sbss)
    *(.sbss.*)
    *(.gnu.linkonce.sb.*)
    __sbss_end = .;
 }
  .data : {
    . = ALIGN(4);
    __data_start = .;
    *(.data)
    *(.data.*)
    *(.gnu.linkonce.d.*)
    __data_end = .;
 }
  .bss : {
       . = ALIGN(4);
       __bss_start = .;
       *(.bss)
       *(.bss.*)
       *(.gnu.linkonce.b.*)
       *(COMMON)
       . = ALIGN(4);
       __bss_end = .;
    }
  . = ALIGN(4);
  _end = .;
  . = 0x10000000 + 0x000000ff - 4;
  _free_space = . - _end;
  _STACK_SIZE = (_free_space * 50) / 100 ;
  _HEAP_SIZE = _free_space - _STACK_SIZE;
    .stack : {
       _stack_end = .;
       __stack_pointer$ = .;
       _stack = . - _STACK_SIZE;
    }
   . = _stack;
   .heap : {
       _heap = . - _HEAP_SIZE;
       _heap_end = .;
    }
}

