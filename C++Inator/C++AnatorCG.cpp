#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr))); // Seed the random number generator
    float number1, number2;
    std::string operationSym;
    std::vector<std::string> divBy0Lore = {
        "Collapse of the universe is imminent",
        "So you have chosen mass eradication",
        "Destruction is of your making",
        "Todd Howard reigns supreme",
        "Pineapple pizzas have tripled",
        "All red pills are gone, only blue remain",
        "Chicken Nuggies were removed from existence",
        "Earth Plague Inc. speedrun has begun",
        "*Cheats Enabled*",
        "Alternate realities with puppies collapsed"
    };
    int doomLoop = 0;
    bool printResult = true;

    std::cout << "Enter the first number: ";
    std::cin >> number1;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operationSym;

    std::cout << "Enter the second number: ";
    std::cin >> number2;

    auto imminent = [&]() {
        std::string randomElement;
        while (doomLoop < 5) {
            randomElement = divBy0Lore[std::rand() % divBy0Lore.size()];
            std::cout << randomElement << std::endl;
            doomLoop++;
            printResult = false;
        }
        return "Suggestion: DO NOT divide by zero next time";
    };

    std::string result;
    if (operationSym == "+") {
        result = std::to_string(number1 + number2);
    }
    else if (operationSym == "-") {
        result = std::to_string(number1 - number2);
    }
    else if (operationSym == "*") {
        result = std::to_string(number1 * number2);
    }
    else if (operationSym == "/") {
        if (number2 == 0) {
            result = imminent();
        }
        else {
            result = std::to_string(number1 / number2);
        }
    }
    else {
        result = "Invalid operation symbol";
    }

    if (printResult) {
        std::cout << "RESULT: " << result << std::endl;
    }

    return 0;
}
