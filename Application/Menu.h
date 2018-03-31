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
        std::string CallPrompt(std::string PromptName);

        private:
            std::vector<Prompt> Prompts;
};
