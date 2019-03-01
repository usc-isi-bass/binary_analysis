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
	int m,n,h[22][22],i,j,b[22][22];
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			cin>>h[i][j];
		
		}
    for(j=0;j<=n+1;j++)          //???????????????????????????0???????????
	{b[0][j]=0;b[m+1][j]=0;}
	for(i=1;i<m+1;i++)
	{b[i][0]=0;b[i][n+1]=0;}
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
			b[i][j]=h[i-1][j-1];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(b[i][j]>=b[i-1][j]&&b[i][j]>=b[i+1][j]&&b[i][j]>=b[i][j+1]&&b[i][j]>=b[i][j-1])
				cout<<i-1<<" "<<j-1<<endl;
		}
	return 0;
}


