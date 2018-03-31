#include "AbstractObject.h"

void AbstractObject::SetName(std::string Name)
{
    name = Name;
}

AbstractObject::AbstractObject(int _VertexCount)
{
    Position = {0, 0};
    VertexCount = _VertexCount;

    for (int i = 0; i < VertexCount; i++)
    {
        Vertex.push_back({0, 0});
    }
}
AbstractObject::~AbstractObject() {}

void AbstractObject::Move(Coordinate newPosition)
{
    Position = newPosition;

    for (int i = 0; i < VertexCount; i++)
    {
        Vertex[i].X += newPosition.X;
        Vertex[i].Y += newPosition.Y;
    }
}

void AbstractObject::SetVertexCoordinate(int index, Coordinate newPosition)
{
    Vertex[index].X = Position.X + newPosition.X;
    Vertex[index].Y = Position.Y + newPosition.Y;
}

long AbstractObject::CalcSquare()
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

void AbstractObject::PrintSquare()
{
    std::cout << name << " square is: " << CalcSquare() << "\n";
}

void AbstractObject::Print()
{
    std::cout << "\nThis is " << name << ".\n";
    std::cout << "Center coordinates: [X: " << Position.X << ", Y: " << Position.Y << "]\n";
    std::cout << "Vertexes: \n";

    for (int i = 0; i < VertexCount; i++)
    {
        std::cout << "    " << i << " : [X: " << Vertex[i].X << ", Y: " << Vertex[i].Y << "]\n";
    }
}