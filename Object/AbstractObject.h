#pragma once

#include <iostream>
#include <vector>

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
    void SetName(std::string Name);

  private:
    Coordinate Position;
    std::vector<Coordinate> Vertex;
    std::string name;
    int VertexCount;
};
