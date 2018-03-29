#include <iostream>
using namespace std;

#include "Object/Triangle.h"

int main(void)
{
    Triangle MyTestTriangle;
    MyTestTriangle.Move({50, 50});
    MyTestTriangle.SetVertexCoordinate(0, {-25, -25});
    MyTestTriangle.SetVertexCoordinate(1, {25, -25});
    MyTestTriangle.SetVertexCoordinate(2, {0, 25});
    MyTestTriangle.Print();
}