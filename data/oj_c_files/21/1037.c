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

/*
 * ????main.cpp
 * ??????
 * ?????2013-01-11
 * ????? n ???????????????????????????????????????????????????????????????????n ???300 
 *		 ????6???3?6?7?1?5?4????? 26/6=4.33?? 1 ??????
 */

int main ()
{
	int n,sum,num = 0,
		i,j,k,
		a[300],t[300];
	double ave,max = 0,D_value;
	cin >> n;
	sum = 0;
	for ( i = 0; i < n; i++ )
	{
		cin >> a[i];
		sum += a[i];
	}
	ave = (double)sum / (double)n;
	for ( i = 0; i < n-1; i++ )
		for ( j = 0; j < n-i-1; j++ )
			if ( a[i] > a[i+1] )
			{
				k = a[i];
				a[i] = a[i+1];
				a[i+1] = k;
			}
	for ( i = 0; i <= n / 2; i++ )
	{
		for ( j = 1; j <= 2; j++ )
		{
			if ( j == 1 )
				D_value = fabs((double)a[i] - ave);
			else
				D_value = (double)a[n-i-1] - ave;
			if ( D_value >= max )
			{
				if ( D_value > max )
				{
					num = 0;
					max = D_value;
				}
				num += 1;
				if ( j == 1 )
					t[num] = a[i];
				else
					t[num] = a[n-i-1];
			}
		}
	}
	cout << t[1];
	for ( i = 2; i <= num; i++ )
		cout << ',' << t[i];
	cout << endl;
	return 0;
}