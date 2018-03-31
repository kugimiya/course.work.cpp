CC=g++ -std=gnu++11

all: 
	$(CC) -c main.cpp -o build/main.o
	$(CC) -c Storage/TrianglePentagonStorage.cpp -o build/TrianglePentagonStorage.o
	$(CC) -c Object/AbstractObject.cpp -o build/AbstractObject.o
	$(CC) -c Object/Pentagon.cpp -o build/Pentagon.o
	$(CC) -c Object/Triangle.cpp -o build/Triangle.o
	$(CC) -c Fabric/PentagonFabric.cpp -o build/PentagonFabric.o
	$(CC) -c Fabric/TriangleFabric.cpp -o build/TriangleFabric.o
	$(CC) -c Comparator/SquareComparator.cpp -o build/SquareComparator.o
	$(CC) -c Application/Menu.cpp -o build/Menu.o
	$(CC) -c Application/Application.cpp -o build/Application.o
	$(CC) build/main.o build/TrianglePentagonStorage.o build/AbstractObject.o build/Pentagon.o build/Triangle.o build/PentagonFabric.o build/TriangleFabric.o build/SquareComparator.o build/Menu.o build/Application.o -o a.out
	./a.out
