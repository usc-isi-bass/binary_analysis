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
	int n , i , j , a[20010] , b[20010] ={0} , m= 0;
	cin >> n;
	for(i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
		for(j = 0;j<=m ;j++)
		{
			if(a[i] == b[j])
			{
				break;
			}
			if(j == m)
			{
				b[m] = a[i];
				m++;
				break;
			}
		}
	}
	for(i = 0 ; i< m; i++)
	{
		if(i == m - 1)
			cout << b[i];
		else
			cout << b[i] << " ";
	}
return 0;
}