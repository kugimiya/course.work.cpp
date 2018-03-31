#pragma once

#include "../Object/Triangle.h"

class TriangleFabric
{
  public:
    TriangleFabric() = default;
    ~TriangleFabric() = default;
    static Triangle GetObject();
};
