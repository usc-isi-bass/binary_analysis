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
	int kk,m,n,i,j,k,a[100][100],c[300];
	scanf("%d",&kk);
	for(i=0;i<kk;i++)
	{
		scanf("%d%d",&m,&n);
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
				scanf("%d",&a[j][k]);
		}
		*(c+i)=0;
		if(m==1&n==1)
			*(c+i)=a[0][0];
		else
		{
			for(j=1,k=0;j<m;j++)
			{
			    *(c+i)+=*(*(a+j)+k);
			}
		    for(k=1,j--;k<n;k++)
			{
			    *(c+i)+=*(*(a+j)+k);
			}
		    for(j=j-1,k--;j>=0;j--)
			{
			    *(c+i)+=*(*(a+j)+k);
			}
		    for(k=k-1,j++;k>=0;k--)
			{
			    *(c+i)+=*(*(a+j)+k);
			}
		}
	}
	for(i=0;i<kk;i++)
		printf("%d\n",*(c+i));
	return 0;
}