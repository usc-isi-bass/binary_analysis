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
	int counttest;
	int n;
	int i, j;
	double average;
	double sum;
	double x[200];
	double *p;

	cin >> counttest;

	while(counttest --)
	{
		cin >> n;

		average = 0;
		sum = 0;

		p = x;

		for(i = 0; i < n; i ++)
		{
			cin >> *p;
			average += *p / n;
			p ++;
		}

		p = x;

		for(i = 0; i < n; i ++)
		{
			sum += (*p - average) * (*p - average);
			p ++;
		}

		sum = sqrt(sum / n);

		cout << fixed << setprecision(5);
		cout << sum << endl;
	}
	
}