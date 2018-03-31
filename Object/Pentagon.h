#include "CoordinateStructure.h"
#include "AbstractObject.h"

class Pentagon
{
  public:
    Pentagon(Coordinate _Position, Coordinate VertexA, Coordinate VertexB, Coordinate VertexC, Coordinate VertexD, Coordinate VertexE);
    ~Pentagon();
    void Move(Coordinate newPosition);
    void SetVertexCoordinate(int index, Coordinate newPosition);
    long CalcSquare();
    void PrintSquare();
    void Print();

  private:
    AbstractObject _object = AbstractObject(5);
};
