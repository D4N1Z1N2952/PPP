// Try this 3.6.4 (page 77)

#include "PPPheaders.h"

int main () {
  vector<string> dont_like = {"Brocolli", "eggplant", "spinach"};
  vector<string> v;

  for (string s; cin >> s;)
    v.push_back(s);

  for (int i = 0; i < v.size(); i++) {
    bool found = false;
    for (int j = 0; j < dont_like.size(); j++) {
      if (v[i] == dont_like[j]) {
        found = true;
        break;
      }
    }
    if(found) {
        cout << "BEEP\n";
    } else {
        cout << v[i] << '\n';
    }
  }

  return 0;
}