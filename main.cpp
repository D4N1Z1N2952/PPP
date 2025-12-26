#include "PPPheaders.h"

int main() {
    double d = 0;
    while (cin>>d) {
        int i = d;
        char c = i;
        cout << "d==" << d
             << " i==" << i
             << " c==" << c
             << " char(" << c << ")" << endl;
    }
}

// 32
// d==32 i==32 c==  char( )
// 33
// d==33 i==33 c==! char(!)
// 10000000
// d==1e+07 i==10000000 c==� char(�)
// 100000000000000000000000000000000000000000000
// d==1e+44 i==2147483647 c==� char(�)
// -55.67
// d==-55.67 i==-55 c==� char(�)
// 2
// d==2 i==2 c== char()
// 5
// d==5 i==5 c== char()
// 10
// d==10 i==10 c==
//  char(
// )