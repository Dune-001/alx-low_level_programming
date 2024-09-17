#!/bin/bash
# compile all .c files to object files with position independent code
gcc -fPIC -c *.c
# create the dll liball.so from all object files
gcc -shared -o liball.so *.o
# clean up all object files
#rm *.o
