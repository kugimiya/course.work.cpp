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

void Triangle::Print()
{
    cout << "This is triangle.\n";
    cout << "Center coordinates: [X: " << Position.X << ", Y: " << Position.Y << "]\n";
    cout << "Vertexes: \n";

    for (int i = 0; i < VertexCount; i++)
    {
        cout << "  " << i << " : [X: " << Vertex[i].X << ", Y: " << Vertex[i].Y << "]\n";
    }
}
