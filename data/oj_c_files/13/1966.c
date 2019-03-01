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
	int n;
	cin >> n;
	int a[20001] = { 0 };
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if ( i == 0 )
			cout << a[i];
		else
		{
			int t = 0;
			for(int j = 0; j < i; j++)
			{
				if ( a[i] == a[j] )
					t ++;
			}
			if( t == 0 )
				cout << " " << a[i];
		}
	}
	return 0;
}