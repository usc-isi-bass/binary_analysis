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
	int n, i, j, m, l, k;
	char s[300];
	cin >> n;
	s[0] = '1';
	k = 1;
	for(i = 0; i < n; i++)
	{
		l = 0;
	    for(j = 0; j < k; j++)
		{
			m = s[j] - '0';
			m = 2 * m + l;
			l = m / 10;
			m = m % 10;
			s[j] = m + '0';
		}
		if(l != 0)
		{
			s[j] = l + '0';
			k++;
		}
	}
	for(i = k - 1; i >= 0; i--)
		cout << s[i];
	return 0;
}
