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

void sum(int i)
{
	int m,n,j,k,sum=0;
	scanf("%d %d",&m,&n);
	int(*p)[100]=(int(*)[100])calloc(100,100*sizeof(int));
	for(j=0;j<m;j++)
	{
		for(k=0;k<n;k++)
			scanf("%d",*(p+j)+k);
	}
	for(j=0;j<m;j++)
	{
		if(j==0||j==m-1)
		{
			for(k=0;k<n;k++)
				sum=sum+*(*(p+j)+k);
		}
		else
			sum=sum+*(*(p+j))+*(*(p+j)+n-1);
	}
	printf("%d\n",sum);
}



void main()
{
	int k;
	scanf("%d",&k);
	int i;
	for(i=0;i<k;i++)
		sum(i);
}
