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
	int a[302],i,count = 0;
	double y,n,num = 0,max = 0;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> a[i];
		num = num + a[i];
	}
	y = num / n;
	for(i = 1; i <= n; i++)
	{
		if(fabs(a[i] - y) > max)
			max = fabs(a[i] - y);
	}
	for(i = 1; i <= n; i++)
	{
		if(fabs(y - a[i] - max) < 0.0001)
		{
			count++;
			cout << a[i];
		}
		if(fabs(a[i] - y - max) < 0.0001)
		{
			if(count == 1)
				cout << "," << a[i] << endl;
			else
				cout << a[i] << endl;
		}
	}
	return 0;
}