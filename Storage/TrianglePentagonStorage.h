#pragma once

#include "IAbstractStorage.h"
#include "../Fabric/TriangleFabric.h"
#include "../Fabric/PentagonFabric.h"
#include "../Comparator/SquareComparator.h"

class TrianglePentagonStorage : public IAbstractStorage
{
  public:
    TrianglePentagonStorage() = default;
    ~TrianglePentagonStorage() = default;
    virtual bool Compare();

    Triangle _Triangle = TriangleFabric::GetObject();
    Pentagon _Pentagon = PentagonFabric::GetObject();
};
