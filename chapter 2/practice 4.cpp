// Practice 2.4 (page 47)

#include "PPPheaders.h"

int main() {
    cout << "Enter the name of the person you want to send the letter: ";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n"
         << "\tHow are you? I am alright. I miss you so much, I wish\n"
         << "\twe meet up with each other more often.\n\n";

    cout << "Enter the other friend name: ";
    string other_friend;
    cin >> other_friend;
    cout << "\tHave you seen " << other_friend << " lately?\n";

    cout << "Enter your age: ";
    int age = 0;
    cin >> age;
    if (age <= 0 || age >= 110) {
        error("You're kidding me!");
    }
    cout << "\tI heard it was your birthday and now you're " << age << " years old";
}