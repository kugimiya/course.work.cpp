#pragma once

#include <iostream>

#include "Menu.h"
#include "../Storage/TrianglePentagonStorage.h"
#include "../Object/CoordinateStructure.h"

class Application
{
  public:
    Application() = default;
    void Init();
    void Start();

    TrianglePentagonStorage Storage;
    Menu _Menu;

  private:
    Coordinate AskCoordinates();
};
