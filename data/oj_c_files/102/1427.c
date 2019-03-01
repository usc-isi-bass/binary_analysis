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
	char a[8];
	float male[44] = {0}, female[44] = {0}, temple;
	int n, i = 0, j = 0;

	cin >> n;
	for ( int k = 0; k < n; k++ )
	{
		cin.get();
		a[0] = cin.get();
		for ( int l = 0; a[l] != ' '; l++ )
			a[l + 1] = cin.get();
		if ( a[0] == 'm' )
		{
			cin >> male[i];
			i++;
		}
		else
		{
			cin >> female[j];
			j++;
		}
	}
	for ( int k = 0; k < i; k++ )
	{
		for ( int l = 1; l < i - k; l++ )
		{
			if ( male[l] < male[l - 1] )
			{
				temple = male[l];
				male[l] = male[l - 1];
				male[l - 1] = temple;
			}
		}
	}
	for ( int k = 0; k < j; k++ )
	{
		for ( int l = 1; l < j - k; l++ )
		{
			if ( female[l] > female[l - 1] )
			{
				temple = female[l];
				female[l] = female[l - 1];
				female[l - 1] = temple;
			}
		}
	}
	cout << fixed << setprecision(2) << male[0];
	for ( int k = 1; k < i; k++ )
		cout << " " << setprecision(2) << male[k];
	for ( int k = 0; k < j; k++ )
		cout << " " << setprecision(2) << female[k];
	return 0;
}
