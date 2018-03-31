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
