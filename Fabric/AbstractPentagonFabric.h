#pragma once

#include "../Object/Pentagon.h"

class AbstractPentagonFabric
{
  public:
    AbstractPentagonFabric() {}
    ~AbstractPentagonFabric() {}
    static Pentagon GetObject();
};

Pentagon AbstractPentagonFabric::GetObject()
{
    Pentagon DummyPentagon = Pentagon({10, 10}, {0, -3}, {3, 0}, {2, 4}, {-2, 4}, {-3, 0});
    return DummyPentagon;
}
