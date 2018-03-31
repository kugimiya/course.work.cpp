#include "Menu.h"

void Menu::AggregatePrompt(string PromptName, string PromptText)
{
    Prompt newPrompt = {PromptName, PromptText, {}};
    Prompts.push_back(newPrompt);
}

void Menu::AddPromptOptions(string PromptName, vector<Option> _Options)
{
    for (int i = 0; i < Prompts.size(); i++)
    {
        if (Prompts[i].PromptName == PromptName)
        {
            Prompts[i].Options = _Options;
        }
    }
}

string Menu::CallPrompt(string PromptName)
{
    for (int i = 0; i < Prompts.size(); i++)
    {
        if (Prompts[i].PromptName == PromptName)
        {
            // TODO: into another method
            cout << Prompts[i].PromptText << "\n    ";

            for (int j = 0; j < Prompts[i].Options.size(); j++)
            {
                cout << Prompts[i].Options[j].Name << " (" << Prompts[i].Options[j].Code << "); ";
            }

            cout << "\n    > ";

            string response;
            cin >> response;

            Option responsed;

            for (int j = 0; j < Prompts[i].Options.size(); j++)
            {
                if (response == Prompts[i].Options[j].Code)
                {
                    responsed = Prompts[i].Options[j];
                }
            }

            return responsed.ReturnValue;
        }
    }
}