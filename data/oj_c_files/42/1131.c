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
	int i,j,n,k,a[200000],x;
	cin >> n;
	for (i=1; i<=n; i++)
		cin >> a[i];
	cin >> k;
	i=1;
	x=n;
	while (i<=x-1)
	{
		if (a[i] == k)
		{
			for (j=i; j<=x-1; j++)
				a[j] = a[j+1];
			i--;
			x--;
		}
		i++;
	}
	if (a[x] == k)
	{
		for (i=1; i<=x-1; i++)
		if (i!=x-1)
		cout << a[i] <<' ';
		else cout << a[i];
	}
	else 
	{
		for (i=1; i<=x; i++)
		if (i!=x)
		cout << a[i] <<' ';
		else cout << a[i];
	}
	return 0;
}