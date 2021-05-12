# azadi RISC-V SoC
Azadi is an SoC with 32-bit RISC-V uni-core "buraq", buraq is in-order core with a 3-stage pipeline that implements the RV32IMFD instruction set architecture.

## Quickstart guide

1. Clone the repository
1. Setup AZADI_ROOT to point to the path in your local filesystem
1. Run make with tools/Makefile

While in a work directory:

Set the AZADI_ROOT environment variable to the root of the simulation directory structure.
Example for bash shell:  
    `export AZADI_ROOT=/path/to/azadi`  
Example for csh or its derivatives:  
    `setenv AZADI_ROOT /path/to/azadi`

## Running RTL simulations
Change directory to tools to run Makefile directly in the working directory
`cd $AZADI_ROOT/tools`
Next we have two options of running a program on the RTL
1. Custom Hex File (Default)

This command will run a custom hex file "prog.hex" from $AZADI_ROOT/tests on the RTL.

`make`

If you want to run a program build using GCC compiler, in the working directory.
1. write your C program and save it in tests directory.
2. change test name in Makefile ```TEST```.
3. type: 
`vim $AZADI_ROOT/src/dummy_memory/DFFRAM.sv`

Locate the "$readmemh" function and swap the path of the custom hex file to the output hex file. 

##  Connecting with GDB
1. For debugging programs make sure that your code is compiled with -g or -ggdb flag.
2. program can only be debuged when it is running which means user should start simulation first
by executing ```make``` in ```$AZADI_ROOT/tools```.
3. open a new terminal and run command ```openocd -f board/azadi.cfg``` in ```$AZADI_ROOT```. this will establish openocd connection.
4. open another terminal and run the command
```riscv32-unknown-elf-gdb -ex "target extended-remote :3333" -ex "info reg" <path to your .elf file of running program>``` in ```$AZADI_ROOT/tools```.
this will start a ```GDB``` session and print all the register values on termial upon start.
