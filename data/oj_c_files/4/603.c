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
	int n,m,a[100][100],b[10000],i,j,sum,t=0;///????
	cin>>n>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
		for(sum=2;sum<=(n+m);sum++)
		{
			
			for(j=1;j<=n;j++)
				
			{
				if((sum-j)>0&&(sum-j)<=m)
				{
					t++;
					b[t]=a[j][sum-j];
				}
				
			}
		}
		
		for(i=1;i<=(m*n);i++)
			cout<<b[i]<<endl;
		return 0;
}