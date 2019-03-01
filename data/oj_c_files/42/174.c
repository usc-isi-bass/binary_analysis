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

int main ()
{
	int a[100001] = {0};
	int n, i, k, sum;
	cin >> n;
	for ( i = 1; i <= n; i ++) //?????
		cin >> a[i];
	cin >> k;
	sum = 1;                   //sum????????1
	for ( i = 1; i <= n; i ++)
	{
		if ( a[i] != k ) //??????sum??
		{
			a[sum] = a[i];
			if (sum != 1)
				cout << ' ';//????????
			cout << a[sum];
			sum ++;
		}
	}
	return 0;
}