#!/bin/bash
bison -d sintatico.y
flex lexico.l
cc lex.yy.c sintatico.tab.c -o analizador -lfl -lm

