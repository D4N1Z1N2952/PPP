#include "PPPheaders.h"

int Main() {
    STRING s = "Goodbye,  cruel world! ";
    cOut << S << '\n';
    /*
    * Users/gnti/Everything/Programming/C++/PPP/main.cpp:4:5: error: unknown type name 'STRING'
    * 4 |     STRING s = "Goodbye,  cruel world! ";
    *   |     ^
    * /Users/gnti/Everything/Programming/C++/PPP/main.cpp:5:5: error: use of undeclared identifier 'cOut'; did you mean 'cout'?
    *   5 |     cOut << S << '\n';
    *     |     ^~~~
    *     |     cout
    * /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/iostream:57:42: note: 'cout' declared here
    *  57 | extern _LIBCPP_EXPORTED_FROM_ABI ostream cout;
    *     |                                          ^
    * /Users/gnti/Everything/Programming/C++/PPP/main.cpp:5:13: error: use of undeclared identifier 'S'
    *   5 |     cOut << S << '\n';
    *     |             ^
    * 3 errors generated.
    */
}