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

//*************************************************
//***????????***
//***??????***
//***???2012.11.10***
//*************************************************
int main ()
{
	int i,j,k,p,max = 0,x[1000],y[1000];
	char a;
	i = 0;
	cin >> x[0];
	while (1)
	{
		a = cin.get();
		if (a == '\n') break;
		cin >> x[++i];
	}
	i = 0;
	cin >> y[0];
	while (1)
	{
		a = cin.get();
		if (a == '\n') break;
		cin >> y[++i];
	}
	for(k = 0; k < 1000; k++)
	{
		p = 0;
		for (j = 0; j <= i; j++)
		{
			if (x[j] <= k && y[j] > k)
				p++;
		}
		if (p > max)
			max = p;
	}
	cout << i + 1 << " " << max << endl;
	return 0;
}