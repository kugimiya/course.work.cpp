#pragma once

#include "IAbstractStorage.h"
#include "../Fabric/TriangleFabric.h"
#include "../Fabric/PentagonFabric.h"

class TrianglePentagonStorage : public IAbstractStorage
{
  public:
    TrianglePentagonStorage() {}
    ~TrianglePentagonStorage() {}
    virtual bool Compare();

    Triangle _Triangle = TriangleFabric::GetObject();
    Pentagon _Pentagon = PentagonFabric::GetObject();
};

bool TrianglePentagonStorage::Compare()
{

}
