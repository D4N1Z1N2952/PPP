// Exercise 3.8 (page 80)

#include "PPPheaders.h"

int main()
{
    char c = ' ';
    double d1 = 0;
    double d2 = 0;
    double result = 0;
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string s = "";

    cin >> s;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == s)
        {
            d1 = i;
            break;
        }
    }

    cin >> s;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == s)
        {
            d2 = i;
            break;
        }
    }

    cin >> c;

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