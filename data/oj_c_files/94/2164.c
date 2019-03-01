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


int data[1000];
int comma;

int main(int argc, const char * argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    sort(data, data + n);
    for (int i = 0; i < n; i++) {
        if (data[i] / 2 * 2 != data[i]) {
            if (comma) {
                cout << ",";
            }
            comma = true;
            cout << data[i];
        }
    }
}
