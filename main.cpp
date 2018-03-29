#include <iostream>
using namespace std;

#include "Object/Triangle.h"
#include "Object/Pentagon.h"

int main(void)
{
    Triangle MyTestTriangle = Triangle({0, 0}, {0, 0}, {0, 2}, {2, 0});
    MyTestTriangle.Print();
    MyTestTriangle.PrintSquare();

    Pentagon MyTestPentagon = Pentagon({10, 10}, {0, -3}, {3, 0}, {2, 4}, {-2, 4}, {-3, 0});
    MyTestPentagon.Print();
    MyTestPentagon.PrintSquare();
}