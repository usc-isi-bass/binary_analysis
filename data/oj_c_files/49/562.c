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
	char a[500];
	int len, i, j, k;
	cin >> a;
	len = strlen(a);
	for (i = 2; i <= len; i++)
		for (j = 0; j <= len - i; j++)
		{
			for (k = 0; k < i / 2; k++)
			{
				if (a[j + k] != a[j + i - 1 - k])
				{	
					k = -1;break;
				}
			}
			if (k != -1)
			{
				for (k = j; k < j + i; k++)
					cout << a[k];
				cout << endl;
			}

		}
	return 0;
}