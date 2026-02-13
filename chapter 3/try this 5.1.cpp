// Try this 3.5.1 (page 71)

#include "PPPheaders.h"

int square (int num);

int main (int argc, char *argv[]) {
  std::cout << square(6) << '\n';
  return 0;
}

int square (int num) {
  return num*num;
}