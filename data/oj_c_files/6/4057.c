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



const int N=110;

int a[N][N];

int main()
{
	int i,j,k;
	int x;
	int m,n;
	scanf("%d",&x);
	while(x--)
	{
		memset(a,0,sizeof(a));
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int sum=0;
		if(m==1)
		{
			for(i=0;i<n;i++)
				sum+=a[0][i];
		}
		else if(n==1)
		{
			for(i=0;i<m;i++)
				sum+=a[i][0];
		}
		else
		{
			for(i=0;i<n;i++)
			{
			sum+=a[0][i];
			sum+=a[m-1][i];
			}
			for(i=1;i<m-1;i++)
			{
			sum+=a[i][0];
			sum+=a[i][n-1];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}