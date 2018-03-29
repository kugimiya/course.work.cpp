CC=g++

build: main.cpp
	$(CC) -std=gnu++11 main.cpp

run: a.out
	./a.out

dev: 
	$(CC) -std=gnu++11 main.cpp; ./a.out