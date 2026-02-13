// Exercise 2.9 (page 49)

#include "PPPheaders.h"

int main() {
    string in;
    std::cout << "Enter the number: ";
    std::cin >> in;
    if (in=="zero") {
        std::cout << 0;
    } else if (in=="one") {
        std::cout << 1;
    } else if (in=="two") {
        std::cout << 2;
    } else if (in=="three") {
        std::cout << 3;
    } else if (in=="four") {
        std::cout << 4;
    } else {
        std::cout << "I don't know this number!";
    }
}