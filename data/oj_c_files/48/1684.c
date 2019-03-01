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
	int a[11][11]={0},b[11][11];
	int m,n,i,j,k;
	cin >> m >> n;
	a[5][5]=m;
	for (k=0;k<n;k++)
	{
		for (i=0;i<11;i++)
			for (j=0;j<11;j++)
				b[i][j]=a[i][j];
	    for (i=1;i<11;i++)
		{
	    	for (j=1;j<11;j++)
			{
		    	a[i][j]=b[i][j]*2+b[i][j-1]+b[i][j+1]+b[i+1][j]+
				b[i-1][j]+b[i+1][j+1]+b[i+1][j-1]+b[i-1][j+1]+b[i-1][j-1];
			}
		}
	}
	for (i=1;i<10;i++)
	{
		for (j=1;j<10;j++)
		{
			if(j!=1)
			    cout << " " << a[i][j] ;
			else
				cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
