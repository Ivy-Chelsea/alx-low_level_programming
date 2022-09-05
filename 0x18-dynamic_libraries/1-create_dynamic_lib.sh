#!/bin/bash
gcc -Wall -Werror -Wextra -pendatic -fPIC *.c -c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
