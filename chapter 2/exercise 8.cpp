// Exercise 2.8 (page 49)

#include "PPPheaders.h"

#include "PPPheaders.h"

int main() {
    int num = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "Number" << num << "is even";
    } else {
        std::cout << "Number " << num << " is odd";
    }
}