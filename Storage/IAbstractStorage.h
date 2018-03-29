#pragma once

class IAbstractStorage
{
  public:
    IAbstractStorage() {}
    ~IAbstractStorage() {}
    virtual void InitStorage() = 0;
    virtual bool Compare() = 0;
};
