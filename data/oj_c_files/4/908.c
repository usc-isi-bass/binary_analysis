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
    int m,n,zz[100][100],k,t,i,j;
	cin>>m>>n;

	for ( i = 0 ; i < m ; i ++ )
		for ( j = 0 ; j < n ; j ++ )
			cin>>zz[i][j];
	for ( i = 0 ; i < n ; i ++ )
	{	
		k = 0;
		t = i;
		for ( j = 0 ; ; j ++ )
		{
			if ( t >= 0 && k < m )
                cout<<zz[k++][t--]<<endl;
			if ( t < 0 || k >= m )
				break;
		}
	}
	for ( i = 1 ; i < m ; i ++ )
	{
		k = i;
		t = n - 1 ;
		for ( j = 0 ; ; j ++ )
		{
			if ( t >= 0 && k < m )
                cout<<zz[k++][t--]<<endl;
			if ( t < 0 || k >= m )
				break;
		}
	}
}
