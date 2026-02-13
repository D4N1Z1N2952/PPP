// Exercise 3.4.2.1 (page 66)

#include "PPPheaders.h"

int main () {
  int i = 0;
  while (i<=25) {
    std::cout << char(97 + i) << "\t" << i + 97 << '\n';
    ++i;
  }
  return 0;
}