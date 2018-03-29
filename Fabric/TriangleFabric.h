#pragma once

#include "../Object/Triangle.h"

class TriangleFabric
{
  public:
    TriangleFabric() {}
    ~TriangleFabric() {}
    static Triangle GetObject();
};

Triangle TriangleFabric::GetObject()
{
    Triangle DummyTriangle = Triangle({0, 0}, {0, 0}, {0, 2}, {2, 0});
    return DummyTriangle;
}
