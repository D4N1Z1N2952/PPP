// Exercise 3.6 (page 80)

#include "PPPheaders.h"

int main()
{
    char c = ' ';
    double d1 = 0;
    double d2 = 0;
    double result = 0;

    if (!(cin >> d1 >> d2 >> c))
    {
        cout << "Invalid input!" << '\n';
        return 1;
    }

    switch (c)
    {
    case '+':
        result = d1 + d2;
        break;
    case '-':
        result = d1 - d2;
        break;
    case '/':
        result = d1 / d2;
        break;
    case '*':
        result = d1 * d2;
        break;
    
    default:
        cout << "Invalid unit" << '\n';
        return 1;
    }

    cout << "The result is: " << result << '\n';
    
}