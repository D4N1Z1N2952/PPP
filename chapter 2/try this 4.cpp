// Try this 2.4 (page 36)

#include "PPPheaders.h"

int main() {
    cout << "Enter amn double: ";
    int n = 0; // double n = 0;
    cin >> n;
    cout << "n == " << n
         << "\n plus 1 == "<< n + 1
         << "\nn three times == " << n*3
         << "\nn twice == " << n*2
         << "\nn squared == " << n*n
         << "\nn half == " << n/2
         << "\nn square root == " << sqrt(n)
         << "\nn module 2 == " << n % 2
         << '\n';
}