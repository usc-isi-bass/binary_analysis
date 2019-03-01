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

void f(char a[])
{
    int i = 0;
    for (i = 0; a[i + 1] != '\0'; i++)
        cout << (char)(a[i] + a[i + 1]);
    cout << (char)(a[i] + a[0]);
    cout << endl;
    return;
}
int main()
{
    char a[101];
    cin.getline(a, 101);
    f(a);
    return 0;
}
