#include <iostream>
#include <string>
#include <sstream>
#include <utility>

auto day_1 = [](){

    int curr = 0, sum = 0, max = 0, i = 0;

    std::stringstream inputStream;
    std::string input;
    while (std::getline(std::cin, input)) {
        inputStream << input;
        inputStream >> curr;
        sum += curr;

        if (curr == 0) {
            if (sum > max) {
                max = sum;
            }
            sum = 0;
        }

        i++;
        std::cout << "iter: " << i << " max: " << max << '\n';
        inputStream.clear();
        curr = 0;
    }

    return std::to_string(max);
};

auto day_2 = [](){
    std::stringstream inputStream;
    std::string input;
    int output = 0;

    while (std::getline(std::cin, input)) {
        inputStream << input;

        char enemy = '\0';
        char you = '\0';
        inputStream >> enemy >> you;

        int result = 0; // LOSS BY DEFAULT
        int bonus = 0;

        // DRAW
        if ((enemy == 'A' && you == 'X') || (enemy == 'B' && you == 'Y') || (enemy == 'C' && you == 'Z'))
            result = 3;

        // WIN
        if ((enemy == 'A' && you == 'Y') || (enemy == 'B' && you == 'Z') || (enemy == 'C' && you == 'X'))
            result = 6;

        if (you == 'X')
            bonus = 1;
        if (you == 'Y')
            bonus = 2;
        if (you == 'Z')
            bonus = 3;

        output += result;
        output += bonus;

        inputStream.clear();

        std::cout << "Enemy: " << enemy << " You: " << you << (result == 6 ? " WIN" : result == 3 ? " DRAW" : " LOSE") << " Change: " << result << " + " << bonus << '\n' << output << '\n';

        result = 0;
        bonus = 0;
    }

    return std::to_string(output);
};

/*
auto day_x = [](){

    std::stringstream inputStream;
    std::string input;
    int output = 0;
    while (std::getline(std::cin, input)) {
        inputStream << input;

        ///

        inputStream.clear();
    }

    return std::to_string(output);
};
*/

int main() {
    std::string output = day_2();
    std::cout << output << std::endl;
    return 0;
}
