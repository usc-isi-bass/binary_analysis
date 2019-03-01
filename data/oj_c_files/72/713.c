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

int a[22][22],n,m;
int main()
{
	int i,j;
	cin>>n>>m;
	for(i=0;i<=n+1;i++)
	for(j=0;j<=m+1;j++)
	a[i][j]=0;
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	cin>>a[i][j];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if (a[i][j]>=a[i-1][j] &&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]) cout<<i-1<<" "<<j-1<<endl;
		}
	}
	return 0;
}