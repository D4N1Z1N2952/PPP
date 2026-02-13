// Exercise 3.4 (page 80)

#include "PPPheaders.h"

int main()
{
    vector<double> dists;

    double sum = 0;
    double biggest = 0;
    double smallest = 0;
    double average = 0;

    for (double dist; cin >> dist)
    {
        dists.push_back(dist);
    }

    for (int i = 0; i < dists.size(); i++)
    {
        sum += dists[i];
    }

    ranges::sort(dists);

    biggest = dists[dists.size() - 1];
    smallest = dists[0];

    for (int i = 0; i < dists.size(); i++)
    {
        average += dists[i];
    }

    average /= 2;

    return 0;
}