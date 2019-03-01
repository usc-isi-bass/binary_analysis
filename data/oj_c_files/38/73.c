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
	double x[101], sum, ave, p, s;
	cin >> k;
	for(i = 1; i <= k; i ++)
	{
		sum = 0;
		p = 0;
		cin >> n;
		for(j = 1; j <= n; j ++)
		{
			cin >> x[j];
			sum = sum + x[j];
		}
		ave = sum / n;
		for(j = 1; j <= n; j ++)
			p = p + (x[j] - ave) * (x[j] - ave);
		s = sqrt(p / n);
		cout << fixed << setprecision(5) << s << endl;
	}
	return 0;
}