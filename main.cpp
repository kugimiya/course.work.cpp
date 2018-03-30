#include <iostream>
using namespace std;

#include "Storage/TrianglePentagonStorage.h"

int main(void)
{
    TrianglePentagonStorage Core;
    Core._Pentagon.Print();

    cout << "Comparison: " << Core.Compare() << "\n";
}