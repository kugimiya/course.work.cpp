#pragma once

class IAbstractStorage
{
  public:
    IAbstractStorage() {}
    ~IAbstractStorage() {}
    virtual bool Compare() = 0;
};
