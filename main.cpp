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

/*
auto day_x = [](){

    std::stringstream inputStream;
    std::string input;
    while (std::getline(std::cin, input)) {
        inputStream << input;

    }
};
*/

int main() {
    std::string output = day_1();
    std::cout << output << std::endl;
    return 0;
}
