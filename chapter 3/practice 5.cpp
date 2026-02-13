// Practice 3.5 (page 78)

#include "PPPheaders.h"

int main () {

  double i1;
  double i2;

  while (cin >> i1) {
    while (cin >> i2) {
      if (i1 > i2) {
        cout << "The biggest number is: " << i1 << '\n';
        cout << "The smallest number is: " << i2 << '\n';
        if ((i1 - i2) < 1.0) {
          cout << "The numbers are almost equal" << '\n';
        }
      } else if (i2 > i1){
        cout << "The biggest number is: " << i2 << '\n';
        cout << "The smallest number is: " << i1 << '\n';
        cout << "The numbers are almost equal" << '\n';
      } else {
        cout << "Both numbers are equal" << '\n';
      }
    }
  }

  return 0;
}