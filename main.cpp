#include "PPPheaders.h"

// m, pol and ft to cm
const double m = 100;
const double pol = 2.54;
const double ft = 12 * pol;

double unit2cm(double d, string s);

int main () {

  double d = 0;
  bool b = true;
  string s = "";

  if (!(cin >> d >> s)) {
    cout << "Invalid input" << '\n';
    return 1;
  }

  double biggest = unit2cm(d, s);
  double smallest = unit2cm(d, s);

 cout << biggest << " is the biggest number so far" << '\n';
 cout << smallest << " is the smallest number so far" << '\n';

  double convert = 0;

  while (b) {
    if (!(cin >> d >> s)) {
      cout << "Invalid input" << '\n';
      return 1;
    }

    convert = unit2cm(d, s);

    if (convert > biggest) {
      cout << convert << " is the biggest number so far" << '\n';
      biggest = convert;
    } else if (convert < smallest) {
      cout << convert << " is the smallest number so far" << '\n';
      smallest = convert;
    }
  }

  return 0;
}

double unit2cm(double d, string s) {
  if (s == "m") {
    return d * m;
  } else if (s == "pol") {
    return d * pol;
  } else if (s == "ft") {
    return d * ft;
  } else if (s == "cm") {
    return d;
  } else {
    return d;
  }
}
