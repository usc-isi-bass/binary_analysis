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
	int n, a[20000], b[20000]={0};
	int i, j, k = 0;
	cin >> n;
	for ( i = 0; i < n; i ++)
		cin >> a[i];
	for ( i = 0; i < n; i ++)
	{
		for ( j = i + 1; j < n; j ++)
		{
			if ( b[j] == 0 )
			{
				if ( a[i]== a[j] )
				{
				   b[j] = 1;
				   k ++;
				}
			}
		}
	}
	cout << a[0];
	for ( i = 1; i < n; i ++ )
	{
		if ( b[i] == 0)
			cout <<" "<< a[i];
	}
	return 0;
}

