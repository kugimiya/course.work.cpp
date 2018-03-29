#include <iostream>
#include <vector>
using namespace std;

#include "CoordinateStructure.h"
#include "AbstractObject.h"

class Triangle :public AbstractObject
{
    public:
        Triangle();
        ~Triangle();
        void Move(Coordinate newPosition);
        void SetVertexCoordinate(int index, Coordinate newPosition);
        long CalcSquare();
        void PrintSquare();
        void Print();

    private:
        Coordinate Position;
        vector<Coordinate> Vertex;
        int VertexCount;
};

Triangle::Triangle()
{
    Position = {0, 0};
    VertexCount = 3;

    for (int i = 0; i < VertexCount; i++) {
        Vertex.push_back({0, 0});
    }
}
Triangle::~Triangle() {}

void Triangle::Move(Coordinate newPosition)
{
    Position = newPosition;

    for (int i = 0; i < VertexCount; i++)
    {
        Vertex[i].X += newPosition.X;
        Vertex[i].Y += newPosition.Y;
    }
}

void Triangle::SetVertexCoordinate(int index, Coordinate newPosition)
{
    Vertex[index].X = Position.X + newPosition.X;
    Vertex[index].Y = Position.Y + newPosition.Y;
}

long Triangle::CalcSquare()
{
    int Square = 0;

    int x1 = Vertex[0].X;
    int y1 = Vertex[0].Y;

    for (int i = 1; i < VertexCount; i++)
    {
        int x2 = Vertex[i].X;
        int y2 = Vertex[i].Y;

        Square = Square + ((x1 + x2) * (y2 - y1));

        x1 = x2;
        y1 = y2;
    }

    Square = Square + ((Vertex[0].X + x1) * (Vertex[0].Y - y1));

    return abs(Square / 2);
}

void Triangle::PrintSquare()
{
    cout << "Square is: " << CalcSquare() << "\n";
}

void Triangle::Print()
{
    cout << "This is triangle.\n";
    cout << "Center coordinates: [X: " << Position.X << ", Y: " << Position.Y << "]\n";
    cout << "Vertexes: \n";

    for (int i = 0; i < VertexCount; i++)
    {
        cout << "    " << i << " : [X: " << Vertex[i].X << ", Y: " << Vertex[i].Y << "]\n";
    }
}
