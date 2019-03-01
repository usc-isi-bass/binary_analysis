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
	int t,i,j,k,flag=1;
	char a[100][10000];
	int num[27]={0};
	cin>>t;
	for ( i=0 ; i<t ; i++ )
	{
		cin >> a[i];
		for ( j = 0; a[i][j] != '\0'; j++ )
		{
			flag=1;
			for ( k = 0 ; a[i][k] != '\0'; k++ )
			{
				if( k == j ) continue;
				if( a[i][j]==a[i][k] )
				{	
					flag=0;
					break;
				}
			}
			if ( flag )
				break;
		}
		if ( flag )
			cout << a[i][j] << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}


				


		
	 
