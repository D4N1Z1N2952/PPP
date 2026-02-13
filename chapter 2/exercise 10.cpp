// Exercise 2.10 (page 49/50)

#include "PPPheaders.h"

int main() {
    string operation;
    double n1 = 0;
    double n2 = 0;
    std::cout << "Enter operator, num1, num2 (e.g. + 4 5): ";
    std::cin >> operation >> n1 >> n2;
    if (operation=="+" || operation=="sum") {
        std::cout << n1 + n2;
    } else if (operation=="-" || operation=="sub") {
        std::cout << n1 - n2;
    } else if (operation=="*" || operation=="mul") {
        std::cout << n1 * n2;
    } else if (operation=="/" || operation=="div") {
        std::cout << n1 / n2;
    }
}