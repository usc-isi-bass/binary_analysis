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


/**
* @author ??
* @date 2010-12-1
* @description
* ??????:???? 
*/
int sum;
void calculate(int, int);


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		int m;
		sum  = 1;
		cin >> m;
		calculate(m, 2);
		cout << sum << endl;
	}
	return 0;
}
void calculate(int m,int begin)
{
	int i;
	int n = sqrt((double)m);
	for ( i = begin; i <= n; i++ )
	{
		if ( m % i == 0)
		{
			sum++;
			calculate(m / i,i);
		}
	}
}