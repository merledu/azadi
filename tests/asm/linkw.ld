OUTPUT_ARCH(riscv)
MEMORY
{

FLASH : ORIGIN = 0x00100000,    LENGTH = 0xF8000
stack : ORIGIN = 0x001F8000,    LENGTH = 0X8000

}

_min_stack      = 0x2000;   /* 8K - minimum stack space to reserve */
_stack_len     = LENGTH(stack);
_stack_start   = ORIGIN(stack) + LENGTH(stack);

_ENTRY_POINT = _start;
ENTRY(_ENTRY_POINT)

SECTIONS
{
.text :
{

_stext = .;
*(.text)
_etext = .;

}>FLASH

.rodata : 
{
 _srodata = .;
 *(.rodata)
 _erodata = .;

}>FLASH
.data :
{

_sdata = .;
*(.rodata)
_edata = .;

}>FLASH
.bss :
{
_sbss = .;
*(.bss)
_ebss = .;
}>FLASH
.stack (NOLOAD) :
{
  . = ALIGN(4);
        . = . + _min_stack ;
        . = ALIGN(4);
        stack = . ;
        _stack = . ;
}>stack
}
