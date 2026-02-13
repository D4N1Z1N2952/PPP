// Exercise 2.7 (page 49)

#include "PPPheaders.h"

int main() {
    string s1, s2, s3;
    std::cout << "Enter three values: ";
    std::cin >> s1 >> s2 >> s3;
    std::cout << s1 << ", " << s2 << " and " << s3 << '\n';

    if (s1 >= s2 && s2 >= s3) {        // s3 s2 s1
        std::cout << s3 << " " << s2 << " " << s1;
    } else if (s3 >= s2 && s2 >= s1) { // s1 s2 s3
        std::cout << s1 << " " << s2 << " " << s3;
    } else if (s3 >= s1 && s1 >= s2) { // s2 s1 s3
        std::cout << s2 << " " << s1 << " " << s3;
    } else if (s1 >= s3 && s3 >= s2) { // s2 s3 s1
        std::cout << s2 << " " << s3 << " " << s1;
    } else if (s2 >= s3 && s3 >= s1) { // s1 s3 s2
        std::cout << s1 << " " << s3 << " " << s2;
    } else if (s2 >= s1 && s1 >= s3) { // s3 s1 s2
        std::cout << s3 << " " << s1 << " " << s2;
    }
}