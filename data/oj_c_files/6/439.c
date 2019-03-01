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

int main ()
{
	int n;
	cin>>n;
	while ( n-- )
	{
		int i,j,a,b,x[100][100],sum=0;
		cin>>a>>b;
		for ( i=0; i<a; i++ )
			for ( j=0; j<b; j++ )
			{
				cin>>x[i][j];
			}
		for ( i=0 ;i<b; i++ )
		{
			sum=sum+x[0][i]+x[a-1][i];
		}
		for ( i=1;i<a-1;i++  )
		{
			sum=sum+x[i][0]+x[i][b-1];
		}
		cout<<sum<<endl;
	}
	return 0;
}
