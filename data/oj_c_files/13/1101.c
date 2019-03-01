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
    long n;
    cin >> n;
    bitset<101> b;
    for (long i = 0; i < n; i++) {
        long x;
        cin >> x;
        if (!b.test(x)) {
            if (i) cout << ' ';
            cout << x;
            b.set(x);
        }
    }
    return 0;
}
