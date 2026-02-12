#include "PPPheaders.h"

int main () {

  double d;

  double biggest = 0;
  double smallest = 2 << sizeof(double);
  
  if (!(cin >> d)) {
    cout << "Invalid input" << '\n';
    return 1;
  }

  std::cout << d << " is the biggest number so far" << '\n';
  std::cout << d << " is the smallest number so far" << '\n';

  while (cin >> d) {

    if (d > biggest) {
      cout << d << " is the biggest number so far" << '\n';
      biggest = d;
    } else if (d < smallest) {
      cout << d << " is the smallest number so far" << '\n';
      smallest = d;
    }
  }

  return 0;
}
