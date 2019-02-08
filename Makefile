CC=g++

all: main

main: main.cpp universityperson.o employee.o universityperson.hpp employee.hpp
	$(CC) main.cpp universityperson.o employee.o -o main

universityperson.o: universityperson.cpp universityperson.hpp
	$(CC) -c universityperson.cpp -o universityperson.o

employee.o: employee.cpp employee.hpp
	$(CC) -c employee.cpp -o employee.o

clean:
	rm -f *.o main
