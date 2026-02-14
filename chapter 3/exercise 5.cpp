// Exercise 3.5 (page 80)

#include "PPPheaders.h"

int main()
{
    cout << "Think of a number between 1 and 100 and I will try to guess it.\n";
    cout << "Press 'c' if my guess is correct.\n";
    cout << "Press 's' if your number is smaller than my guess.\n";
    cout << "Press 'l' if your number is larger than my guess.\n\n";

    int low = 1;
    int high = 100;
    char response = ' ';

    while (low <= high) {
        int guess = low + (high - low) / 2;
        if (guess == 0) guess = 1; // Make sure guess is at least 1.

        cout << "Is your number " << guess << "? (c/s/l): ";
        cin >> response;

        if (response == 'c') {
            cout << "I guessed it! Your number is " << guess << ".\n";
            break;
        } else if (response == 's') {
            high = guess - 1;
        } else if (response == 'l') {
            low = guess + 1;
        } else {
            cout << "Sorry, I didn't understand your response. Please use 'c', 's', or 'l'.\n";
        }

        if (low > high) {
            cout << "You must have made a mistake or cheated! I couldn't guess your number.\n";
        }
    }

    return 0;
}
