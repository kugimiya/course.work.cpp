#pragma once

#include "IAbstractStorage.h"
#include "../Fabric/AbstractTriangleFabric.h"
#include "../Fabric/AbstractPentagonFabric.h"

class TrianglePentagonStorage : public IAbstractStorage
{
  public:
    TrianglePentagonStorage() {}
    ~TrianglePentagonStorage() {}
    virtual bool Compare();

    Triangle _Triangle = AbstractTriangleFabric::GetObject();
    Pentagon _Pentagon = AbstractPentagonFabric::GetObject();
};

bool TrianglePentagonStorage::Compare()
{

}
