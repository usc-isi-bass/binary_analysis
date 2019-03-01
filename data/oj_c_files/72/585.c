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
	int a[100][100],m,n,i,j;
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];

	for(j=0;j<=n+1;j++)
		a[0][j]=0;
	for(j=1;j<=m;j++)
		a[j][0]=0;
	for(j=1;j<=m;j++)
		a[j][n+1]=0;
	for(j=0;j<=n+1;j++)
		a[m+1][j]=0;
	for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])
				cout<<i-1<<' '<<j-1<<endl;
		}
	return 0;

}