#include <iostream>
using namespace std;

#include "Fabric/AbstractTriangleFabric.h"
#include "Fabric/AbstractPentagonFabric.h"

int main(void)
{
    Triangle MyTestTriangle = AbstractTriangleFabric::GetObject();
    MyTestTriangle.Print();
    MyTestTriangle.PrintSquare();

    Pentagon MyTestPentagon = AbstractPentagonFabric::GetObject();
    MyTestPentagon.Print();
    MyTestPentagon.PrintSquare();
}