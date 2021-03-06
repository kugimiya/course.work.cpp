#pragma once

#include "CoordinateStructure.h"
#include <string.h>

class IAbstractObject
{
  public:
    IAbstractObject() = default;
    virtual ~IAbstractObject() = default;
    virtual void Move(Coordinate newPosition) = 0;

    virtual void SetVertexCoordinate(int index, Coordinate newPosition) = 0;
    virtual long CalcSquare() = 0;

    virtual void PrintSquare() = 0;
    virtual void Print() = 0;

    virtual void SetName(std::string Name) = 0;
};
