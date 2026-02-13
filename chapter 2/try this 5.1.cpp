// Try this 2.5.1 (page 39)

#include "PPPheaders.h"

int main() {
    string previous;
    string current;
    int word_number = 0;
    while (cin>>current) {
        word_number++;
        if (previous==current) {
            cout << "Word number: " << word_number << " - Repeated word: " << current << '\n';
        }
        previous = current;
    }
    /* First try me:
    * input:  The cat cat jumped
    * output: Word number: 3 - Repeated word: cat
    */
    /* Second try me:
    * input: She she laughed "he he he!" because what he did did not looked too too good good
    * output: Word number: 11 - Repeated word: did
    *         Word number: 15 - Repeated word: too
    *         Word number: 17 - Repeated word: good
    */

}