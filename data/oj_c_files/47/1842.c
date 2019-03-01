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

int n, a[101];
int *p1, *p2, *p3;
int main()
{
    cin >> n;
    for (p2 = a; n --; ++ p2)//??n??????*p2?????
        cin >> *p2;
    p3 = p2;
    for (p1 = a, -- p2; p1 < p2; ++ p1, -- p2)//*p1??*p2???????
    {
        n = *p1;
        *p1 = *p2;
        *p2 = n;
    }
    cout << *a;
    for (p1 = a + 1; p1 < p3; ++ p1)
        cout << " " << *p1;
    return 0;
}
