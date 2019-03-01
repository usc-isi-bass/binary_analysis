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
	int m,n,a[10][10],k,i,j,c[10][10];
	cin>>m>>n;
	memset(a,0,sizeof(a));
	a[5][5]=m;
	for (k=1;k<=n;k++)
		{
		memset(c,0,sizeof(c));
		for (i=1;i<=9;i++)
			for (j=1;j<=9;j++)
			{
				c[i][j]+=a[i][j];
				c[i-1][j]+=a[i][j];
				c[i+1][j]+=a[i][j];
				c[i][j-1]+=a[i][j];
				c[i][j+1]+=a[i][j];
				c[i-1][j-1]+=a[i][j];
				c[i-1][j+1]+=a[i][j];
				c[i+1][j-1]+=a[i][j];
				c[i+1][j+1]+=a[i][j];
			}
		for (i=1;i<=9;i++)
			for (j=1;j<=9;j++)
				a[i][j]+=c[i][j];

		}
	for (i=1;i<=9;i++)
		for (j=1;j<=9;j++)
		{
			cout<<a[i][j];
			if (j!=9) cout<<" ";
			if ((i!=9)&&(j==9)) cout<<endl;
		}
	return 0;
}
