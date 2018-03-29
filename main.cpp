#include <iostream>
using namespace std;

#include "Object/Triangle.h"

int main(void)
{
    Triangle MyTestTriangle;
    MyTestTriangle.Move(10, 50);
    MyTestTriangle.Print();
}