// Try this 3.4.2.3 (page 68)

#include "PPPheaders.h"

int main () {
  for (int i = 0; i <= 25; i++) {
    std::cout << char(97 + i) << "\t" << 97 + i << '\n';
  }
  return 0;
}