#include "PPPheaders.h"

int main() {
    int pennies = 0;  // 1
    int nickels = 0;  // 5
    int dimes = 0;    // 10
    int quarters = 0; // 25
    int hdollars = 0; // 50
    int dollars = 0;  // 100
    std::cout << "Enter the number of pennies: ";
    std::cin >> pennies;
    std::cout << "Enter the number of nickels: ";
    std::cin >> nickels;
    std::cout << "Enter the number of dimes: ";
    std::cin >> dimes;
    std::cout << "Enter the number of quarters: ";
    std::cin >> quarters;
    std::cout << "Enter the number of half dollars: ";
    std::cin >> hdollars;
    std::cout << "Enter the number of dollars: ";
    std::cin >> dollars;

    std::cout << "You have " << pennies << " pennies" << '\n';
    std::cout << "You have " << nickels << " nickels" << '\n';
    std::cout << "You have " << dimes << " dimes" << '\n';
    std::cout << "You have " << quarters << " quarters" << '\n';
    std::cout << "You have " << hdollars << " half dollars" << '\n';
    std::cout << "You have " << dollars << " dollars" << '\n';

    std::cout << "The total value of all your coins is: " << pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (hdollars * 50) + (dollars * 100);
    std::cout << " or " << (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.1) + (quarters * 0.25) + (hdollars * 0.5) + (dollars * 1);
}