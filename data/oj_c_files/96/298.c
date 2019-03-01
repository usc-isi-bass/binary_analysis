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
	char a[100];
	int i, l, r, L, j, b[100];
	gets(a);
	l = strlen(a);
	if (l == 1)
	{
		cout << "0" << endl;
	    cout << a[0] - '0';
    }
	if (l == 2)
	{
		b[0] = (10 * (a[0] - '0') + a[1] - '0') / 13;
		r = (10 * (a[0] - '0') + a[1] - '0') % 13;
		cout << b[0] << endl;
	    cout << r;
    }
	if (l > 2)
	{
	    L = l - 2;
	    b[0] = (100 * (a[0] - '0') + 10 * (a[1] - '0') + a[2] - '0') / 13;
	    r = (100 * (a[0] - '0') + 10 * (a[1] - '0') + a[2] - '0') % 13;
	    for (i = 1; i < L; i++)
		{
		    b[i] = (10 * r + a[i + 2] - '0') / 13;
	        r = (10 * r + a[i + 2] - '0') % 13;
		}
	    for (i = 0; i < L; i++)
	        cout << b[i];
	    cout << endl << r;
	}
    return 0;
}