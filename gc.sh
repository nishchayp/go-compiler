#!/bin/bash

bison -d gc.y && flex gc.l && gcc -o gc lex.yy.c gc.tab.c && ./gc $1
