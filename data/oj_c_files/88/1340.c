#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main() {
    int a;
    while (!cin.eof()) {
        while (!cin.eof() && !isdigit(cin.peek())) // not digit
            cin.get(); // ignore
        if (cin >> a) // digit, not eof
            cout << a << endl;
    }
    return 0;
}
