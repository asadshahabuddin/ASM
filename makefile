example1: example1.cpp example1.o
	g++ example1.cpp example1.o -o example1

example1.o: example1.asm
	nasm -f elf64 example1.asm -o example1.o
