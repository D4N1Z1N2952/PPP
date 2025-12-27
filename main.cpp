#include "PPPheaders.h"

int main() {
    int v1, v2, v3;
    std::cout << "Enter three values: ";
    std::cin >> v1 >> v2 >> v3;
    std::cout << v1 << ", " << v2 << " and " << v3 << '\n';

    if (v1 >= v2 && v2 >= v3) {        // v3 v2 v1
        std::cout << v3 << " " << v2 << " " << v1;
    } else if (v3 >= v2 && v2 >= v1) { // v1 v2 v3
        std::cout << v1 << " " << v2 << " " << v3;
    } else if (v3 >= v1 && v1 >= v2) { // v2 v1 v3
        std::cout << v2 << " " << v1 << " " << v3;
    } else if (v1 >= v3 && v3 >= v2) { // v2 v3 v1
        std::cout << v2 << " " << v3 << " " << v1;
    } else if (v2 >= v3 && v3 >= v1) { // v1 v3 v2
        std::cout << v1 << " " << v3 << " " << v2;
    } else if (v2 >= v1 && v1 >= v3) { // v3 v1 v2
        std::cout << v3 << " " << v1 << " " << v2;
    }
}