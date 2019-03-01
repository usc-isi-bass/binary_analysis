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
	int k, n, i;
	double data[101], average, s, *p = NULL;
	cin >> k;
	for (i = 1; i <= k; i++)
	{
		cin >> n;
		average = 0;
		s = 0;
		p = data;
		for (p = data; p < data + n; p++)
		{
			cin >> *p;
			average += *p;
		}
		average = average / n;
		p = data;
		for (p = data; p < data + n; p++)
			s += (*p - average) * (*p - average);
		s = sqrt(s / n);
		cout << fixed << setprecision(5) << s << endl;
	}
	return 0;
}