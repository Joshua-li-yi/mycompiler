CC := g++
CFLAGS := -Wall -Wextra -std=c++11 # without debug
TARGET := ./bin/main.out

all: run

alltest: all
	cp $(TARGET) ../../lab6_test/main.out

src/main.lex.yy.c: src/main.l
	 flex --noyywrap -o src/main.lex.yy.cpp  src/main.l

src/main.tab.c: src/main.y
	bison -o src/main.tab.cpp --defines=src/main.tab.h -v src/main.y

src/pch.h.gch: src/pch.h
	g++ -x c++-header -o src/pch.h.gch -c src/pch.h

lex: src/main.lex.yy.c

yacc: src/main.tab.c

main: src/pch.h.gch
	$(CC) $(CFLAGS) $(shell ls ./src/*.cpp) -o ./bin/main.out

.PHONY: all clean main run lex yacc test debug link testscope asm nasm example-code out

run: lex yacc main

clean:
	rm -f src/*.output src/main.lex.yy.cpp src/main.tab.cpp src/main.tab.h src/main.output src/pch.h.gch $(TARGET) *.o ./bin/* 

test: 
	./bin/main.out <tests/test.c >result.txt

m: 
	./bin/main.out <tests/main.c >main_out.txt

test2: 
	./bin/main.out tests/test.c >result2.txt

t:
	g++ -o ./tests/test.out ./tests/test.cpp
	./tests/test.out

showassem:
	g++ -E ./tests/test2.cpp -o ./tests/test2.i
	g++ -S ./tests/test2.i -o ./tests/test2.s

testasm:
	./bin/main.out <tests/main.c >output.S
	gcc -c output.S -o output.o
	gcc output.o -o output
	./output
	

