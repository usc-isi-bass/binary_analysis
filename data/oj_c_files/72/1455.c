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
	int x, y, a[23][23]={0}, i, j ;
	cin >> x >> y ;
	for (i = 1 ; i < x+1 ; i++)
	{
		for (j = 1 ; j < y+1 ; j++)
		{
			cin >> a[i][j] ;
		}
	}
	for (i = 1 ; i < x +1 ; i++)
	{
		for (j = 1 ; j < y+1 ; j++)
		{
			if (a[i+1][j] <= a[i][j] && a[i-1][j] <= a[i][j] && a[i][j+1] <= a[i][j] && a[i][j-1] <= a[i][j])
			{
				cout << i-1 << ' ' << j-1 << endl ;
			}
		}
	}
	
	return 0 ;
}

