// Exercise 3.4.1.1 (page 62)

#include "PPPheaders.h"

int main() {
    const double dollar2iene = 159.20;
    const double dollar2reais = 5.37;
    const double dollar2pound = 0.74;
    
    cout << "Enter an value folowed by its type of money to be converted into dollars: ";
    double value = 0;
    char type = ' ';
    cin >> value >> type;
    if (type=='y') {
        value *= dollar2iene;
    } else if (type=='r') {
        value *= dollar2reais;
    } else if (type=='p') {
        value *= dollar2pound;
    } else {
        cout << "Unknow type";
        return -1;
    }
    cout << "THe conveted value is: " << value << type;
}