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

void main()
{
	int c[10001],i,j,p,n,min,max,a,b;
	min=10000;
	max=0;
	for(i=0;i<10001;i++)
		c[i]=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a<min)
			min=a;
		if(b>max)
			max=b;
		for(j=a+1;j<b;j++)
		{
			c[j]=0;
		}
		if(c[a]==1)
			c[a]=2;
		else if(c[a]==2)
			c[a]=0;
		if(c[b]==1)
			c[b]=2;
		else if(c[b]==2)
			c[b]=0;
	}
	for(p=min+1;p<max;p++)
	{
		if(c[p]!=0)
			break;
	}
	if(p==max)
		printf("%d %d",min,max);
	else if(p<max)
		printf("no");
}