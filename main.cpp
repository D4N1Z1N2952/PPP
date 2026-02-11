#include "PPPheaders.h"

int main () {

  int i1;
  int i2;

  while (cin >> i1) {
    while (cin >> i2) {
      if (i1 > i2) {
        cout << "The biggest number is: " << i1 << '\n';
        cout << "The smallest number is: " << i2 << '\n';
      } else {
        cout << "The biggest number is: " << i2 << '\n';
        cout << "The smallest number is: " << i1 << '\n';
      }
    }
  }

  return 0;
}
