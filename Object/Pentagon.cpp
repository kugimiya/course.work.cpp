#include "Pentagon.h"

Pentagon::Pentagon(Coordinate _Position, Coordinate VertexA, Coordinate VertexB, Coordinate VertexC, Coordinate VertexD, Coordinate VertexE)
{
    _object.Move(_Position);
    _object.SetName("Pentagon");
    _object.SetVertexCoordinate(0, VertexA);
    _object.SetVertexCoordinate(1, VertexB);
    _object.SetVertexCoordinate(2, VertexC);
    _object.SetVertexCoordinate(3, VertexD);
    _object.SetVertexCoordinate(4, VertexE);
}
Pentagon::~Pentagon() {}

void Pentagon::Move(Coordinate newPosition)
{
    _object.Move(newPosition);
}

void Pentagon::SetVertexCoordinate(int index, Coordinate newPosition)
{
    _object.SetVertexCoordinate(index, newPosition);
}

long Pentagon::CalcSquare()
{
    return _object.CalcSquare();
}

void Pentagon::PrintSquare()
{
    _object.PrintSquare();
}

void Pentagon::Print()
{
    _object.Print();
}
