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
	char a[1000][50] ; 
    int m , i, b[1000],sum ;
	cin >> m ;
	for (i = 1 ; i <= m ; i ++ )
	{
			cin >> a[i] ;
			b[i] = strlen(a[i]) ;
	}
	sum = 0 ;
	for (i = 1 ; i <= m -1 ; i ++ )
	{
        sum = sum + b[i] + 1 ;
		if(sum < 80 && sum + b[i + 1] > 80 )
		{
			cout << a[i] <<endl;
			sum = 0 ;
		}
		else if(sum == 80)
		{
			cout << a[i] << endl ;
			sum = 0 ;
		}
		else if (sum == 81)
        {
			sum = 0 ;
			cout << a[i] << endl ;
		}
		else
		cout << a[i] << " ";/*if(sum == 79)
		{
			cout << a[i] << endl ;
			sum = 0 ;
		}
		else if(sum == 80)
		{
			cout << a[i] << endl ;
			sum = 0 ;
		}
		else
		{
			cout << endl << a[i] ;
			sum = b[i] ;
		}*/
	}
	cout << a[m] ;
	return 0 ;
}

