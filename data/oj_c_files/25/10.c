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
	int i, j, num, flag;
	int a[101];
	cin >> num;
	memset(a, 0, sizeof(a));
    a[100] = 1;
    while( num > 0 )
	{
		flag = 0;
		for( i = 100; i >= 1; i-- )
		{
			a[i] = a[i] * 2 + flag;
			if( a[i] >= 10 )
			{	
				a[i] -= 10;
				flag = 1;
			}
			else
				flag = 0;
		}
		num--;
	}
	i = 1;
	while( a[i] == 0 )
	{
		i++;
	}
	for( j = i; j <= 100; j++ )
	{
		cout << a[j];
	}
	cout << endl;
	return 0;
}