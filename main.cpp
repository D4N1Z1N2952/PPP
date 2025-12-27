#include "PPPheaders.h"

int main() {
    int val1;
    int val2;
    std::cout << "Write both values: ";
    std::cin >> val1 >> val2;
    if (val1>val2) {
        std::cout << val1 << " is bigger than " << val2 << '\n';
    } else if (val2>val1) {
        std::cout << val2 << " is bigger than " << val1 << '\n';
    } else {
        std::cout << "Both " << val1 << " and " << val2 << " are equal" << '\n';
    }

    std::cout << "The sum of both values is:             " << val1 + val2 << '\n';
    std::cout << "The difference between both values is: " << val1 - val2 << '\n';
    std::cout << "The product between both values is:    " << val1 * val2 << '\n';
    std::cout << "The ratio between both numbers is:     " << val1 / val2 << '\n';
}