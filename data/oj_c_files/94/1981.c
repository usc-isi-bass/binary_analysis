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
	int N = 0;
	cin >> N;
	int a[N];
	int i = 0, j = 0, k = 0, t = 0;
	
	for ( int i = 0; i < N; i++ )
	{
		cin >> k;
		if ( k%2 == 1)
		{
			a[j] = k;
			j++;
		}
	}
	
	for ( int i = 0; i < j; i++ )
		for ( int k = i + 1; k < j; k++ )
			if ( a[i] > a[k] )
			{
				t = a[i];
				a[i] = a[k];
				a[k] = t;
			}
	
	cout << a[0];
	for ( int i = 1; i < j; i++ )
		cout << "," << a[i];
	
	return 0;
}