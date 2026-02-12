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
  vector<double> vd;
  vector<string> vs;

  if (!(cin >> d >> s)) {
    cout << "Invalid input" << '\n';
    return 1;
  }

  if (!(testUnit(s))) {
      cout << "Invalid unit" << '\n';
      return 1;
  }

  double biggest = unit2cm(d, s);
  double smallest = unit2cm(d, s);

  cout << biggest << " is the biggest number so far" << '\n';
  cout << smallest << " is the smallest number so far" << '\n';

  double convert = 0;

  while (true) {
    if (!(cin >> d >> s)) {
      cout << "Invalid input" << '\n';
      break;
    }

    if (!(testUnit(s))) {
      cout << "Invalid unit" << '\n';
      break;
    }

    convert = unit2cm(d, s);

    if (convert > biggest) {
      cout << convert << " is the biggest number so far" << '\n';
      biggest = convert;
    } else if (convert < smallest) {
      cout << convert << " is the smallest number so far" << '\n';
      smallest = convert;
    }
    sum += convert;

    vd.push_back(d);
    vs.push_back(s);
  }

  cout << "The biggest number is: " << biggest << '\n';
  cout << "The smallest number is: " << smallest << '\n';

  cout << "The total sum is: " << sum << '\n';

  cout << "All the numbers entered are: " << '\n';
  for (int i = 0; i < vd.size(); i++) {
    cout << '\t' << vd[i] << vs[i] << '\n';
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
