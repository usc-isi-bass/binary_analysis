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
	int k,i,j,a,m=1,n=1,temp;
	scanf("%d",&k);
	int * sum= (int *)malloc(sizeof(int)*k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a);
		if(a==1||a==2)
			sum[i]=1;
		else
		{
		m=1;n=1;
		sum[i]=0;
		for(j=1;j<=a-2;j++)
		{
			sum[i]=m+n;
			m=n;
			n=sum[i];
		}
		}
	}
	for(i=0;i<k;i++)
		printf("%d\n",sum[i]);
	return 0;
}
	



