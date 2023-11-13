#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc  *.o -shared -o liball.so
export LD_LIBRARY_PATH = $PWD:LD_LIBRARY_PATH
