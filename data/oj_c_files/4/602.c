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
	int n,m,a[1500][1500],b[10000],i,j,sum,t=0;///????
	cin>>n>>m;
	for (i=1;i<=1499;i++) for (j=1;j<=1499 ;j++) a[i][j]=-198;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
		for(sum=2;sum<=(n+m);sum++)
		{
			for (i=1;i<sum;i++)	
			{
				if (a[i][sum-i]!=-198)
					cout<<a[i][sum-i]<<endl;
			}
		}
		return 0;
}