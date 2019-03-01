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
	int k, n, i, j; 
	double a[100] = {0};
	double *p;
	double jun = 0, s = 0;
	cin >> k;
	for(j = 1; j <= k; j++)
	{
		cin >> n;
		p = a;
		for(i = 0; i < n; i++)
		{
			cin >> *(p + i);
		}
		for(i = 0; i < n; i++)
		{
			jun = jun + *(p + i);
		}
		jun = jun / n;
		for(i = 0; i < n; i++)
		{
			s = s + (*(p + i) - jun) * (*(p + i) - jun);
		}
		s = sqrt(s / n);
		cout << fixed << setprecision(5) << s << endl;
		memset(a,0,sizeof(a));
		jun = 0;
		s = 0;
	}
	return 0;
}