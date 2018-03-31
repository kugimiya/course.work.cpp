#pragma once

#include <iostream>
#include <vector>

typedef struct {
    std::string Name;
    std::string Code;
    std::string ReturnValue;
} Option;

typedef struct {
    std::string PromptName;
    std::string PromptText;
    std::vector<Option> Options;
} Prompt;

class Menu
{
    public:
        Menu() = default;
        void AggregatePrompt(std::string PromptName, std::string PromptText);
        void AddPromptOptions(std::string PromptName, std::vector<Option> _Options);
        void CallPrompt(std::string PromptName);

      private:
        std::vector<Prompt> Prompts;
};

void Menu::AggregatePrompt(std::string PromptName, std::string PromptText)
{
    Prompt newPrompt = {PromptName, PromptText, {}};
    Prompts.push_back(newPrompt);
}

void Menu::AddPromptOptions(std::string PromptName, std::vector<Option> _Options)
{
    for (int i = 0; i < Prompts.size(); i++) {
        if (Prompts[i].PromptName == PromptName) {
            Prompts[i].Options = _Options;
        }
    }
}

void Menu::CallPrompt(std::string PromptName)
{
    for (int i = 0; i < Prompts.size(); i++) {
        if (Prompts[i].PromptName == PromptName) {
            std::cout << Prompts[i].PromptText << "\n    ";

            for (int j = 0; j < Prompts[i].Options.size(); j++) {
                std::cout << Prompts[i].Options[j].Name << " (" << Prompts[i].Options[j].Code << "); ";
            }

            std::cout << "\n    > ";

            std::string response;
            std::cin >> response;

            std::cout << "Your choise is: " << response << "\n";
        }
    }
}
