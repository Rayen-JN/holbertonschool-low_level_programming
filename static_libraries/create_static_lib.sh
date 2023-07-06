#!/bin/bashgc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs liball.a *.o
ranlib libwork.a

