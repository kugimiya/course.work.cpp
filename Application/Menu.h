#pragma once

#include <iostream>
#include <vector>
using namespace std;

typedef struct {
    string Name;
    string Code;
    string ReturnValue;
} Option;

typedef struct {
    string PromptName;
    string PromptText;
    vector<Option> Options;
} Prompt;

class Menu
{
    public:
        Menu() = default;
        void AggregatePrompt(string PromptName, string PromptText);
        void AddPromptOptions(string PromptName, vector<Option> _Options);
        string CallPrompt(string PromptName);

      private:
        vector<Prompt> Prompts;
};
