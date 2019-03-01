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
	int i,n,m,k,j,p,a[1000][1000],sum;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum=0;
		scanf("%d%d",&m,&n);
        for(j=1;j<=m;j++)
		{
			for(p=1;p<=n;p++)
			{
				scanf("%d",&a[j][p]);
			}
		}
		for(p=1;p<=n;p++)
		{
            sum+=a[1][p];
		}
		for(j=2;j<=m;j++)
		{
			sum+=a[j][n];
		}
		for(p=n-1;p>=1;p--)
		{
			sum+=a[m][p];
		}
		for(j=m-1;j>=2;j--)
		{
			sum+=a[j][1];
		}
		printf("%d\n",sum);
	}
	return 0;
}