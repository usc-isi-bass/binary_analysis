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
	int t, k;
	cin >> k;
	for (t = 0; t < k; t++)
	{
		int i,n;
		cin >> n;
		double x[101],*p,sum=0,ave,ts=0;
		p = x;
		for (i = 0; i < n; i++)
		{
			cin >> *p;
			sum += *p;
			p++;
		}
		ave = sum / n;
		p = x;
		for (i = 0; i < n; i++)
		{
			ts += (*p - ave)*(*p - ave);
			p++;
		}
		double e;
		e = sqrt(ts / n);
		cout << fixed;
		cout << setprecision(5) << e << endl;
	}
	return 0;
}