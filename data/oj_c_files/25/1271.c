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
	int n, c, len, j, i, k;
	cin >> n;
	a[0] = '1';
	a[1] = '\0';
	for(i = 1; i <= n; i ++)
	{
		c = 0;
		len = strlen(a);
		for(j = 0; j <= len - 1; j ++)
		{
			if(a[j] - '0' < 5)
			{
				a[j] = (a[j] - '0') * 2 + '0' + c;
				c = 0;
			}
			else
			{
				a[j] = (a[j] - '0') * 2 + '0' + c - 10;
				c = 1;
			}
		}
		a[j] = c + '0';
		if(a[j] != '0')
		    a[j + 1] = '\0';
		else
			a[j] = '\0';
	}
	len = strlen(a);
	for(k = len - 1; k >= 0; k--)
		cout << a[k];
	return 0;
}
				





