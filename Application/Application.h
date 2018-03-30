#pragma once

#include <iostream>
using namespace std;

#include "../Storage/TrianglePentagonStorage.h"

class Application
{
  public:
    Application() {}
    void Init();
    TrianglePentagonStorage Storage;
};

void Application::Init()
{
    cout << "Hello. Your default data: \n";

    Storage._Triangle.Print();
    Storage._Pentagon.Print();
}
