#pragma once

#include <iostream>
#include <vector>
using namespace std;

#include "CoordinateStructure.h"
#include "IAbstractObject.h"

class AbstractObject : public IAbstractObject
{
  public:
    AbstractObject(int _VertexCount);
    ~AbstractObject();
    void Move(Coordinate newPosition);
    void SetVertexCoordinate(int index, Coordinate newPosition);
    long CalcSquare();
    void PrintSquare();
    void Print();
    void SetName(string Name);

  private:
    Coordinate Position;
    vector<Coordinate> Vertex;
    string name;
    int VertexCount;
};

void AbstractObject::SetName(string Name)
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
    cout << name << " square is: " << CalcSquare() << "\n";
}

void AbstractObject::Print()
{
    cout << "\nThis is " << name << ".\n";
    cout << "Center coordinates: [X: " << Position.X << ", Y: " << Position.Y << "]\n";
    cout << "Vertexes: \n";

    for (int i = 0; i < VertexCount; i++)
    {
        cout << "    " << i << " : [X: " << Vertex[i].X << ", Y: " << Vertex[i].Y << "]\n";
    }
}
