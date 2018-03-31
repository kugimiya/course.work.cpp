#pragma once

#include <iostream>
using namespace std;

#include "Menu.h"
#include "../Storage/TrianglePentagonStorage.h"

class Application
{
  public:
    Application() {}
    void Init();
    TrianglePentagonStorage Storage;
    Menu _Menu;
};

void Application::Init()
{
    _Menu.AggregatePrompt("action", "Choose action: ");
    _Menu.AddPromptOptions("action", {
        {"Move object", "m", "1"},
        {"Print info", "p", "2"},
        {"Compare", "c", "3"},
        {"Quit", "q", "4"}
    });

    _Menu.CallPrompt("action");
}
