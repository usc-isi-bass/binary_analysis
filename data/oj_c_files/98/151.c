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
	char a[500][41];
	int n, i, len, b[500];
	int *q = b;
	char (*p)[41] = a;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> *(p + i);
		*(q + i) = strlen(*(p + i));
	}
	cout << *p;
	len = *q + 1;
	for(i = 1; i < n; i++)
	{
		if(len + *(q + i) <= 80)
		{
			cout << ' ' << *(p + i);
			len += 1 + *(q + i);
		}
		else
		{
			cout << endl << *(p + i);
			len = *(q + i) + 1;
		}
	}
	return 0;
}


