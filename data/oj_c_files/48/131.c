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
	int a[5][11][11]={0};
	int m,n,i,j,k;
	cin>>m>>n;
	a[0][5][5]=m;
	for(i=0;i<n;i++)
		for(j=1;j<=9;j++)
			for(k=1;k<=9;k++)
			{
				a[i+1][j][k]=2*a[i][j][k]+a[i][j-1][k-1]+a[i][j-1][k+1]+a[i][j+1][k]+a[i][j-1][k]+a[i][j][k+1]+a[i][j][k-1]+a[i][j+1][k+1]+a[i][j+1][k-1];
			}
	for(j=1;j<=9;j++)
	{cout<<a[n][j][1];
	for(k=2;k<=9;k++)
		cout<<' '<<a[n][j][k];
	cout<<endl;
	}
	return 0;
}
