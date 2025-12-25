#include "PPPheaders.h"

int main() {
    string previous;
    string current;
    int repeated = 0;
    while (cin>>current) {
        if (previous==current) {
            cout << "Repeated word: " << current << '\n';
            repeated++;
        }
        previous = current;
    }
    /* First try me:
    * input:  The cat cat jumped
    * output: Repeated word: cat
    *         repeated = 1
    */
    /* Second try me:
    * input: She she laughed "he he he!" because what he did did not looked too too good good
    * output: Repeated word: did
    *         Repeated word: too
    *         Repeated word: good
    *         repeated = 3
    */

}