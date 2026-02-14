// Exercise 3.10 (page 80)

#include "PPPheaders.h"

int main()
{
    double last = 2;

    for (double i = 0; i < 64; i++)
    {
        cout << i + 1 << ' ' << last << '\n';
        last *= 2;
    }
    
}

// The maximun numebr you can count with the double type is infinite