#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

int main() {
    std::string s;
    s = "";
    std::stringstream ss;
    ss << s;

    std::fstream filestream;
    filestream.open("inputs/day_4.txt");

    char buf[128];
    while (filestream.getline(buf, 128)) {
        std::cout << s << '\n';
    }

    int i = 0;
    ss >> i;
    std::cout << i;
    return i;
}
