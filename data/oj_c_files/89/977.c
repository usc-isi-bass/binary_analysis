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
	int a[100000] = { 0 };
	int x , y;
	int num[10000] = { 0 };
	int n, k;
	cin >> n;
	int i = 0;
	int j;
	int count = 0;
	cin >> x >> y;
	do
	{
		a[i] = x;
		num[y] ++;
		i ++;
		cin >> x >> y;
	}while( !(x == 0 && y == 0 ) );
	j = i;
	for( i = 0; i < n; i ++)
	{
		if( num[i] == n - 1 )
		{
			for( k = 0 ; k < j; k ++)
			{
				if( a[k] == i)
					break;
				if( k == j - 1)
				{
					cout << i << endl;
					count++;
				}
			}
		}
	}
	if( count == 0 )
		cout << "NOT FOUND" << endl;
	return 0;
}
