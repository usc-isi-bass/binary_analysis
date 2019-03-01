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

int reverse( num );
void main()
{
	int i , a[6] ;
	for (i=0;i<6;i++)
	scanf ( "%d" , &a[i] );
	for ( i=0 ; i<6 ; i++ )
		printf( "%d\n", reverse(a[i]) );
}
 

int reverse( int num )
{
	int i, a[6] , m , n , b[6] , c[6] , s=0 ;
	if ( num > 0 )
	{
		n=log10(num)+1;   /* ??????? */
		a[1]=num;
		for ( i=1 ; i<=n ; i++ )
		{
			m=pow(10,n-i);
			b[i]=a[i]/m;
			a[i+1]=a[i]%m;     /* ?????? */
		}
		for ( i=1 ; i<=n ; i++ )
        {   c[i]=b[i]*pow(10,i-1);
		    s += c[i] ;            /* ?????? */
		}
		return s;
	}

	if ( num < 0 )
	{
		num = (-1)*num;
		n=log10(num)+1;   /* ??????? */
		a[1]=num;
		for ( i=1 ; i<=n ; i++ )
		{
			m=pow(10,n-i);
			b[i]=a[i]/m;
			a[i+1]=a[i]%m;     /* ?????? */
		}
		for ( i=1 ; i<=n ; i++ )
        {   c[i]=b[i]*pow(10,i-1);
		    s += c[i] ;            /* ?????????? */
		}
		return -s;
	}

	if ( num == 0 || num== -0 )
		return 0;
}