// Exercise 3.2 (page 79)

#include "PPPheaders.h"

int main()
{
    string s = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << ' ' << (int)s[i] << '\n';
    }
    
    return 0;
}
