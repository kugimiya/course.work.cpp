#include <iostream>
using namespace std;

#include "Object/Triangle.h"

int main(void)
{
    Triangle MyTestTriangle;
    MyTestTriangle.Move({0, 0});
    MyTestTriangle.SetVertexCoordinate(0, {0, 0});
    MyTestTriangle.SetVertexCoordinate(1, {0, 2});
    MyTestTriangle.SetVertexCoordinate(2, {2, 0});
    MyTestTriangle.Print();
    MyTestTriangle.PrintSquare();
}