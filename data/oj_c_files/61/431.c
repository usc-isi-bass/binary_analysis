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
	int n, i, j, t1, t2,t;
	cin >> n;
	int a[21],b[21];
	for(i = 0; i < n; i ++)
		cin >> a[i];
	for(i = 0; i < n; i++)
	{
		b[i] = 0;
		for(j = 1; j <= a[i]; j ++)
		{
			if(j == 1 || j == 2)
			{
				t1 = 1;
				t2 = 1;
			}
			else
			{
				t = t1;
				t1 = t2;
				t2 = t2 + t;
			}
		}	
		b[i] = t2;
		cout << b[i] << endl;
	}
	return 0;
}
