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
	int i, k, n;
	double x[100], f, ave;
	cin >> k;
	while(k--)
	{
		cin >> n;
		f = 0;
		ave = 0;
		for(i = 0; i < n; i++)
		{
			cin >> x[i];
			ave = ave + x[i] / n;
		}
		for(i = 0; i < n; i++)
		{
			f = f + ((x[i] - ave) * (x[i] - ave)) / n;
		}
		f = sqrt(f);
		cout << fixed << setprecision(5) << f << endl;
	}
	return 0;
}
