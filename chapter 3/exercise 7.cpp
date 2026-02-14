// Exercise 3.7 (page 80)

#include "PPPheaders.h"

int main()
{
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string s;
    while (cin >> s)
    {
        bool found = false;
        for (int i = 0; i < v.size(); ++i)
        {
            if (v[i] == s)
            {
                cout << i << '\n';
                found = true;
                break;
            }
        }

        if (!found)
        {
            // Not a word, maybe a number?
            if (s == "0") cout << v[0] << '\n';
            else if (s == "1") cout << v[1] << '\n';
            else if (s == "2") cout << v[2] << '\n';
            else if (s == "3") cout << v[3] << '\n';
            else if (s == "4") cout << v[4] << '\n';
            else if (s == "5") cout << v[5] << '\n';
            else if (s == "6") cout << v[6] << '\n';
            else if (s == "7") cout << v[7] << '\n';
            else if (s == "8") cout << v[8] << '\n';
            else if (s == "9") cout << v[9] << '\n';
        }
    }
}