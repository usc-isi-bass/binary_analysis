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
	int num;
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		int n;
		cin >> n;
		double a[1001], sum = 0, ave;
		double *p;
		for(p = a; p < a+n; p++)
		{
			cin >> *p;
			sum = sum + *p;
		}
		ave = sum / n;
		double summ = 0;
		for(p = a; p < a+n; p++)
			summ = summ + ( *p - ave ) * ( *p - ave );
		summ = summ / n;
		summ = sqrt( summ );
		printf( "%.5lf\n", summ );	
	}
	return 0;
}