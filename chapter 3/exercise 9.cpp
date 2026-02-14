// Exercise 3.9 (page 80)

#include "PPPheaders.h"

int main()
{
    uint64_t last = 2;

    for (uint64_t i = 0; i < 64; i++)
    {
        cout << i + 1 << ' ' << last << '\n';
        last *= 2;
    }
    
}

// For 1.000         - 10
// For 1.000.000     - 20
// For 1.000.000.000 - 27