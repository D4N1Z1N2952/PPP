// Try this 2.3 (page 34)

#include "PPPheaders.h"

int main() {
    cout << "Enter you name and your age: ";
    string name;
    int age;
    cin >> name >> age;
    cout << "Your name is: " << name << " and your age in months is: " << age * 12 << '\n';
}