#include "CoordinateStructure.h"

class IAbstractObject
{
    public:
        IAbstractObject();
        virtual ~IAbstractObject();
        virtual void Move(Coordinate newPosition) = 0;

        virtual void SetVertexCoordinate(int index, Coordinate newPosition) = 0;
        virtual long CalcSquare() = 0;

        virtual void PrintSquare() = 0;
        virtual void Print() = 0;
};

IAbstractObject::IAbstractObject() {}
IAbstractObject::~IAbstractObject() {}
