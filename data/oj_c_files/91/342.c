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



int main()
{
    char a[102];
    cin.getline(a, 102);
    int length = strlen(a);
    int a0 = a[0];
    for (int i = 0; i < length-1; i++) {
        a[i] += a[i+1];
    }
    a[length-1] += a0;
    cout << a;
}