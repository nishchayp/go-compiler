#!/bin/bash

bison -d gc.y 
flex gc.l 
gcc lex.yy.c gc.tab.c 
./a.out
