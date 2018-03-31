#include "CoordinateStructure.h"
#include "AbstractObject.h"

class Triangle
{
  public:
    Triangle(Coordinate _Position, Coordinate VertexA, Coordinate VertexB, Coordinate VertexC);
    ~Triangle();
    void Move(Coordinate newPosition);
    void SetVertexCoordinate(int index, Coordinate newPosition);
    long CalcSquare();
    void PrintSquare();
    void Print();

  private:
    AbstractObject _object = AbstractObject(3);
};
