CC=g++

build: main.cpp
	$(CC) -std=gnu++11 main.cpp

run: a.out
	./a.out

dev: 
	$(CC) -std=gnu++11 -c main.cpp -o build/main.o
	$(CC) -std=gnu++11 -c Storage/TrianglePentagonStorage.cpp -o build/TrianglePentagonStorage.o
	$(CC) -std=gnu++11 -c Object/AbstractObject.cpp -o build/AbstractObject.o
	$(CC) -std=gnu++11 -c Object/Pentagon.cpp -o build/Pentagon.o
	$(CC) -std=gnu++11 -c Object/Triangle.cpp -o build/Triangle.o
	$(CC) -std=gnu++11 -c Fabric/PentagonFabric.cpp -o build/PentagonFabric.o
	$(CC) -std=gnu++11 -c Fabric/TriangleFabric.cpp -o build/TriangleFabric.o
	$(CC) -std=gnu++11 -c Comparator/SquareComparator.cpp -o build/SquareComparator.o
	$(CC) -std=gnu++11 -c Application/Menu.cpp -o build/Menu.o
	$(CC) -std=gnu++11 -c Application/Application.cpp -o build/Application.o
	$(CC) -std=gnu++11 build/main.o build/TrianglePentagonStorage.o build/AbstractObject.o build/Pentagon.o build/Triangle.o build/PentagonFabric.o build/TriangleFabric.o build/SquareComparator.o build/Menu.o build/Application.o -o a.out
	./a.out
