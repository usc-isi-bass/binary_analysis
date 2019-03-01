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


const int a[3] = {3, 5, 7};

int sum, b[10];

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        if (N % a[i] == 0) {
            sum ++;
            b[sum] = a[i];
        }
    }
    if (sum == 0) cout << "n" << endl; else {
        cout << b[1];
        for (int i = 2; i <= sum; i++) cout << " " << b[i];
        cout << endl;
    }
    return 0;
}
