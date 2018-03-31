#pragma once

#include "../Object/Pentagon.h"

class PentagonFabric
{
  public:
    PentagonFabric() = default;
    ~PentagonFabric() = default;
    static Pentagon GetObject();
};

