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
	int n,j,b;
	int i;
	int a[50001];
	a[0]=a[1]=1;
	cin>>n;
	for( i=2 ; i<n ; i++ )
	{
		a[i]=0;
	}
	for( i=4 ; i<n ; i++ )
	{
		for( j=2 ; j<230 && j<=i/2 ; j++ )
		{
			if( a[j]==1 )
			{
				continue;
			}
			if( i%j==0 )
			{
				a[i]++;
				i++;
				j=1;
			}
		}
	}
	for( i=3 ; i<=n/2 ; i++ )
	{
		for( j=3 ; j<=n/2 ; j++ )
		{
			if( a[j]==1 )
			{
				continue;
			}
			if( a[2*i-j]==0 )
			{
				cout<<2*i<<"="<<j<<"+"<<2*i-j<<endl;
				i++;
				if( i>n/2 )
				{
					break;
				}
				j=2;
			}
		}
	}
}