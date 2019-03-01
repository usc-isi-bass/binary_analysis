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
	int m,n,i,j,k,l,temp;
	
	scanf("%d",&m);
	double * sum=(double *)malloc(sizeof(double)*m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		l=1;k=2;
		sum[i]=0;
		for(j=0;j<n;j++)
		{
           sum[i]=sum[i]+1.0*k/l;
		   temp=l+k;
		   l=k;
		   k=temp;
		}
		
	}
	for(i=0;i<m;i++)
	{
	printf("%.3lf\n",sum[i]);
	}
    free(sum);
	return 0;
}