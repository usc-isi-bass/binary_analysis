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
	int n , a[30] , b[30] = {0} ,max = 0 , flag = 0;
	cin>>n;
	for( int i = 1 ; i <= n ;i++)
	{
		cin>>a[i];
	}
	for( int j = n, k ; j >= 1 ; j--)
	{
		max = 0;
		flag = 0;
		for(  k = j ; k <= n ;k++)
		{
			if( a[j] >= a[k] )
			{
				flag = 1; 
			 if( b[k] >= max)
			 {
				 max = b[k];
			 }
			}
		}
		if( flag )
		{
			b[j] = max + 1;
		}
		else
		{
			b[j] = max;
		}
		
	}
	for( int i = 1 ; i <= n ; i ++)
	{
		if( b[i] >= max )
		{
			max = b[i];
		}
	}
	cout<<max<<endl;
	return 0;
}


