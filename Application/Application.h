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
    void Start();
    
    TrianglePentagonStorage Storage;
    Menu _Menu;
};

void Application::Init()
{
    _Menu.AggregatePrompt("action", "Choose action: ");
    _Menu.AddPromptOptions("action", {
        {"Move object", "m", "1"},
        {"Move object's vertex", "v", "1a"},
        {"Print info", "p", "2"},
        {"Compare", "c", "3"},
        {"Quit", "q", "4"}
    });

    _Menu.AggregatePrompt("choose_object", "Choose object: ");
    _Menu.AddPromptOptions("choose_object", {
        {"Triangle", "t", "1"},
        {"Pentagon", "p", "2"}
    });
}

void Application::Start()
{
    string main_prompt = "";

    while (main_prompt != "4") {
        main_prompt = _Menu.CallPrompt("action");

        // move object
        if (main_prompt == "1") {
            string selected_object = _Menu.CallPrompt("choose_object");
            
            // move triangle
            if (selected_object == "1") {
                int x, y;

                cout << "> Input X: ";
                cin >> x;
                cout << "/n>Input Y: ";
                cin >> y;

                Storage._Triangle.Move({x, y});
                Storage._Triangle.Print();
            }

            // move pentagon
            if (selected_object == "2") {
                int x, y;

                cout << "> Input X: ";
                cin >> x;
                cout << "/n>Input Y: ";
                cin >> y;

                Storage._Pentagon.Move({x, y});
                Storage._Pentagon.Print();
            }
        }

        if (main_prompt == "1a") {
            // move vertex
        }

        if (main_prompt == "2") {
            // print info
            Storage._Triangle.Print();
            Storage._Pentagon.Print();
        }

        if (main_prompt == "3") {
            // print comparison
            Storage._Triangle.PrintSquare();
            Storage._Pentagon.PrintSquare();
        }
    }
}
