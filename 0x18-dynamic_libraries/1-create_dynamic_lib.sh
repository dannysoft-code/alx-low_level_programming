#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c -fPIC *.c
gcc -shared -Wl,-soname,liball.so.1 -o liball.so *.o

