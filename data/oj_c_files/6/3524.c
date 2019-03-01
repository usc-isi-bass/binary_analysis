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
	int k,m,n,i,j,a[M][M],sum;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d %d",&m,&n);
		sum=0;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
		{
			if(m==1) sum=sum+a[0][i];
			else sum=sum+a[0][i]+a[m-1][i];
		}
		for(i=1;i<m-1;i++)
			sum=sum+a[i][0]+a[i][n-1];
		printf("%d\n",sum);
	}
	return 0;
}