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
//***???2013.1.13***
//*************************************************
int main ()
{
	int n,c,i,t[2],flag;
	double a[301],average,d;
	cin >> n;
	average = 0;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		average += a[i];
	}
	average /= n;
	d = fabs(a[0] - average);
	flag = 1;
	t[0] = a[0];
	for (i = 1; i < n; i++)
	{
		if (fabs(fabs(a[i] - average) - d) < 0.1)
		{
			t[flag] = a[i];
			flag++;
		}
		else if (fabs(a[i] - average) > d)
		{
			flag = 1;
			d = fabs(a[i] - average);
			t[0] = a[i];
		}
	}
	c = 0;
	for (i = 0; i < flag; i++)
	{
		if (t[i] < average)
		{
			cout << t[i];
			c++;
			if (c < flag)
				cout << ",";
		}	
	}
	for (i = 0; i < flag; i++)
	{
		if (t[i] > average)
		{
			cout << t[i];
			c++;
			if (c < flag)
					cout << ",";
		}
	}
	cout << endl;
	return 0;
}