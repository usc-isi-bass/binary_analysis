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

//********************************
//*???n-gram????   **
//*????? 1300012707 **
//*???2013.12.10**
//********************************
int main()
{
	char c[502];
	int a[502], n, max, i, t, j;
	char *p = c, *p1 = c;
	int *q = a;
	cin >> n;
	cin >> c;
	max = 0;
	for ( q = a; q <= &a[501]; q++)
	{
		*q = 0;
	}
	for ( p = c; *p != '\0'; p ++)
	{
		q = a;
		for ( p1 = c; p1 <= p; p1++)
		{
			t = 1;
			for ( i = 0; i < n; i = i + 1)
			{
				if ( *(p + i) != *(p1 + i))
				{
					t = 0;
					break;
				}
			}
			if ( t == 1)
			{
				*q = *q + 1;
				break;
			}
			q++;
		}
	}
	for ( q = a; q <= &a[501]; q++)
	{
		if ( *q > max)
		{
			max = *q;
		}
	}
	if ( max == 1) 
	{
		cout << "NO" << endl;
	}
	else
	{
    	cout << max << endl;
    	for ( i = 0; i < 502; i = i + 1)
		{
	    	if ( a[i] == max)
			{
		    	p = c;
		    	for ( j = 0; j < n; j = j + 1)
				{
			    	cout << *(p + i + j);
				}
		    	cout << endl;
			}
		}
	}
	return 0;
}