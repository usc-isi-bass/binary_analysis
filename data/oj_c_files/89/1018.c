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
	int flag = 1;
    int n, a[100000] = {0}, b[100000] = {0}, c[10000] = {0}, d[10000] = {0};
    cin >> n;
    int *p = a, *q = b;
    for (int i = 0; ; i++)
    {
		cin >> *(p + i) >> *(q + i);
        if (*(p + i) == *(q + i) && *(p + i) == 0)
			break;
        c[*(q + i)]++;
        d[*(p + i)]++;
        if (c[*(q + i)] == n - 1 && d[*(q + i)] == 0)
        {
            cout << *(q + i);
            flag = 0;
        }
    }
    if (flag == 1)
        cout << "NOT FOUND";
    return 0;
}
