CC=g++

all: main

main: main.cpp universityperson.o universityperson.hpp
	$(CC) main.cpp universityperson.o -o main

universityperson.o: universityperson.cpp universityperson.hpp
	$(CC) -c universityperson.cpp -o universityperson.o

clean:
	rm -f *.o main
