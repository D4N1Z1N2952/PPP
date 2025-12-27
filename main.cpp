#include "PPPheaders.h"

int main() {
    cout << "Enter the name of the person you want to send the letter: ";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n"
         << "\tHow are you? I am alright. I miss you so much, I wish\n"
         << "\twe meet up with each other more often.\n\n";
}