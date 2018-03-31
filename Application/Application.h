#pragma once

#include <iostream>
using namespace std;

#include "Menu.h"
#include "../Storage/TrianglePentagonStorage.h"
#include "../Object/CoordinateStructure.h"

class Application
{
  public:
    Application() {}
    void Init();
    void Start();
    
    TrianglePentagonStorage Storage;
    Menu _Menu;

  private:
    Coordinate AskCoordinates();
};

void Application::Init()
{
    // init 'choose action' prompt
    _Menu.AggregatePrompt("action", "Choose action: ");
    _Menu.AddPromptOptions("action", {
        {"Move object", "m", "1"},
        {"Move object's vertex", "v", "1a"},
        {"Print info", "p", "2"},
        {"Compare", "c", "3"},
        {"Quit", "q", "4"}
    });

    // init 'choose object' prompt
    _Menu.AggregatePrompt("choose_object", "Choose object: ");
    _Menu.AddPromptOptions("choose_object", {
        {"Triangle", "t", "1"},
        {"Pentagon", "p", "2"}
    });

    // init 'choose vertex' prompt
    _Menu.AggregatePrompt("choose_vertex", "Choose vertex: ");
    _Menu.AddPromptOptions("choose_vertex", {
        {"1. A", "a", "0"},
        {"2. B", "b", "1"},
        {"3. C", "c", "2"},
        {"4. D", "d", "3"},
        {"5. E", "e", "4"}
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
                Storage._Triangle.Move(AskCoordinates());
                Storage._Triangle.Print();
            }

            // move pentagon
            if (selected_object == "2") {
                Storage._Pentagon.Move(AskCoordinates());
                Storage._Pentagon.Print();
            }
        }

        if (main_prompt == "1a") {
            // move vertex

            string selected_object = _Menu.CallPrompt("choose_object");
            string vertex = _Menu.CallPrompt("choose_vertex");
            int index = stoi(vertex);

            // move one of vertex of triangle
            if (selected_object == "1") {
                if (index < 3) {
                    Storage._Triangle.SetVertexCoordinate(index, AskCoordinates());
                    Storage._Triangle.Print();
                }
            }

            // move one of vertex of pentagon
            if (selected_object == "2") {
                Storage._Pentagon.SetVertexCoordinate(index, AskCoordinates());
                Storage._Pentagon.Print();
            }
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

Coordinate Application::AskCoordinates()
{
    int x, y;

    cout << "> Input X: ";
    cin >> x;
    cout << "/n>Input Y: ";
    cin >> y;

    return {x, y};
}
