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
    char s[101][101];
    int i = 0;
    while (cin >> s[i]) {
        i++;
    }
    cout << s[i-1];
    for (i -= 2; i >= 0; i--) {
        cout << " " << s[i];
    }
    return 0;
}
