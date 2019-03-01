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
	int n, i, j, s, p = 0;
	cin >> n;
	int	a[n + 1];
	memset(a, 0, sizeof(a));
	for (i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	for (i = 1; i <= n; i ++)
	{
		if (a[i] % 2 == 0)
		{continue;}		
		for (j = i; j <= n; j ++)
		{
			
			if (a[j] % 2 ==0)
			{continue;}
			if (a[i] > a[j])
			{
				s = a[i];
				a[i] = a[j];
				a[j] = s;
			}					
		}
		if (p != 0)
		{cout << ",";}
		cout << a[i];
		p ++;
	}
return 0;
}