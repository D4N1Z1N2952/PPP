#include "PPPheaders.h"

int main() {
    int miles;
    std::cout << "Enter the number of miles: ";
    std::cin >> miles;
    std::cout << "Kilometers: " << miles * 1609;
}