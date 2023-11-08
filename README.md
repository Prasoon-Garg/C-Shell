# Sequenshell

## Run instructions

To compile the shell run `make`

Execute using `./cshell`

## File distribution

1. main.c contains the driver code for the shell
2. headers.h contains all the needed global variables, macros and libraries
3. the drivers directory contains all the files which do the grunt work of the shell i.e. functions which the main function directly calls
4. the programs directory contains all the files for the execution of each command that is needed

## Assumptions

1. The maximum command length can be 1023 charecters long
2. If no previous working directory is set, `cd -` will lead to going into the home directory