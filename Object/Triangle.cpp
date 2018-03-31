#include "Triangle.h"

Triangle::Triangle(Coordinate _Position, Coordinate VertexA, Coordinate VertexB, Coordinate VertexC)
{
    _object.Move(_Position);
    _object.SetName("Triangle");
    _object.SetVertexCoordinate(0, VertexA);
    _object.SetVertexCoordinate(1, VertexB);
    _object.SetVertexCoordinate(2, VertexC);
}
Triangle::~Triangle() {}

void Triangle::Move(Coordinate newPosition)
{
    _object.Move(newPosition);
}

void Triangle::SetVertexCoordinate(int index, Coordinate newPosition)
{
    _object.SetVertexCoordinate(index, newPosition);
}

long Triangle::CalcSquare()
{
    return _object.CalcSquare();
}

void Triangle::PrintSquare()
{
    _object.PrintSquare();
}

void Triangle::Print()
{
    _object.Print();
}
