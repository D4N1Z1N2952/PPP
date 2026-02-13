// Practice 3.11 (page 78)

#include "PPPheaders.h"

// m, pol and ft to cm
const double m = 100;
const double pol = 2.54;
const double ft = 12 * pol;

double unit2cm(double d, string s);
bool testUnit(string s);

int main () {

  double d = 0;
  string s = "";
  double sum = 0;
  vector<double> v;

  double biggest = 0;
  double smallest = 0;
  double convert = 0;
  bool first_time = true;

  // Main loop

  while (cin >> d >> s) {
    if (!(testUnit(s))) {
      cout << "Invalid unit" << '\n';
      break;
    }

    convert = unit2cm(d, s);

    if (first_time) {
      biggest = convert;
      smallest = convert;
      first_time = false;
      cout << biggest << " is the biggest number so far" << '\n';
      cout << smallest << " is the smallest number so far" << '\n';
    }
    else {
        if (convert > biggest) {
          cout << convert << " is the biggest number so far" << '\n';
          biggest = convert;
        } else if (convert < smallest) {
          cout << convert << " is the smallest number so far" << '\n';
          smallest = convert;
        }
    }
    sum += convert;

    v.push_back(convert / m);
  }
  

  cout << "Invalid input" << '\n';

  cout << "The biggest number is: " << biggest << '\n';
  cout << "The smallest number is: " << smallest << '\n';

  cout << "The total sum is: " << sum << '\n';

  ranges::sort(v);

  cout << "All the numbers entered in ascending order are: " << '\n';
  for (int i = 0; i < v.size(); i++) {
    cout << '\t' << v[i] << 'm' << '\n';
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

bool testUnit(string s) {
  if (s == "pol") {
    return true;
  } else if (s == "cm") {
    return true;
  } else if (s == "ft") {
    return true;
  } else if (s == "m") {
    return true;
  } else {
    return false;
  }
}