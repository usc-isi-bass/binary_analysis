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
	char a[256] = {0}, b[256] = {0}, c[256] = {0};
	cin >> a >> b >> c;
	int i, j, m, k = 0, la = strlen(a), lb = strlen(b);
	for (i = 0; i < la; i++)
	{
		if(a[i] == b[0])
		{
			m = i;
			for(j = 1; j < lb; j++)
			{
				m++;
				if (a[m] != b[j])
					break;
			}
			if (j == lb)
			{	
				m = i;
				k = 1;
				break;
			}
		}
	}
	if (k == 0)
		cout << a;
	else
	{
		for (i = 0; i < m; i++)
		cout << a[i];
	cout << c;
	for (i = m + lb; i < la; i++)
		cout << a[i];
	}
	return 0;
}