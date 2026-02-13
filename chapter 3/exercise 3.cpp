// Exercise 3.3 (page 79)

#include "PPPheaders.h"

int main()
{
    vector<double> v;
    for (double d; cin >> d;)
    {
        v.push_back(d);
    }

    ranges::sort(v);

    if ((v.size() % 2) != 0)
    {
        cout << "The mediam number is: " << v[v.size()/2] << '\n';
    } else
    {
        cout << "The mediam number is: " << ((double)(v.size()/2) + (double)(v.size()/2) + 1) / 2 << '\n';
    }
    
    return 0;
}
