#pragma once

#include "../Object/Triangle.h"

class AbstractTriangleFabric
{
  public:
    AbstractTriangleFabric() {}
    ~AbstractTriangleFabric() {}
    static Triangle GetObject();
};

Triangle AbstractTriangleFabric::GetObject()
{
    Triangle DummyTriangle = Triangle({0, 0}, {0, 0}, {0, 2}, {2, 0});
    return DummyTriangle;
}
