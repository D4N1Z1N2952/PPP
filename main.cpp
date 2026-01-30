#include "PPPheaders.h"

int main() {
    const double dollar2iene = 159.20;
    const double dollar2reais = 5.37;
    const double dollar2pound = 0.74;
    
    cout << "Enter an value folowed by its type of money to be converted into dollars: ";
    double value = 0;
    char type = ' ';
    cin >> value >> type;
    
    switch (type) {
      case 'y':
        value *= dollar2iene;
        break;
      case 'p':
        value *= dollar2pound;
        break;
      case 'r':
        value *= dollar2reais;
        break;
      default:
        cout << "Unknow value" << '\n';
        break;
    }

    cout << "THe conveted value is: " << value << type;
}