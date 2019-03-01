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
	int a[15], i, j, w, t, days, k = 0, c[15], m; 
	a[0] = 0; 
	a[1] = 31; 
	a[2] = 28; 
	a[3] = 31; 
	a[4] = 30; 
	a[5] = 31; 
	a[6] = 30; 
	a[7] = 31; 
	a[8] = 31; 
	a[9] = 30; 
	a[10] = 31; 
	a[11] = 30; 
	a[12] = 31; 
	cin >> w; 
	t = 8 - w; 
	if ( ( 13 - t ) % 7 == 5 )
	{
		k++; 
		c[k] = 1; 
	}
	if ( ( 44 - t ) % 7 == 5 )
	{
		k++; 
		c[k] = 2; 
	}
	for ( i = 3; i <= 12; i++ )
	{
		days = 13; 
		for ( j = 2; j < i; j++ )
		{
			days += a[j]; 
		} 
		days += 31 - t;  
		if ( days % 7 == 5 )
		{
			k++; 
			c[k] = i; 
		}
	}
	for ( i = 1; i <= k; i++ )
		cout << c[i] << endl;  
	return 0; 
}