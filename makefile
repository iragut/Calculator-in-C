all: main.c
	gcc -o Calculator $<
clear: Calculator
	rm Calculator