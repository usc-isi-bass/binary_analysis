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
	int k,m,n,i,j,a,num[150][150],sum;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d %d\n",&m,&n);
		sum=0;
		for(j=0;j<m;j++)
		{
			for(a=0;a<n;a++)
			{
				scanf("%d",&num[j][a]);
			}
		}
		for(j=0;j<n;j++)
		{
			sum+=num[0][j];
                            if(m!=1)
{
			sum+=num[m-1][j];
}
		}
		for(j=1;j<m-1;j++)
		{
			sum+=(num[j][0]);
if(n!=1)
{
			sum+=num[j][n-1];
}

		}
		printf("%d\n",sum);
	}
	return 0;
}


