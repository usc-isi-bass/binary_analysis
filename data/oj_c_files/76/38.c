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
	int n,a[50000],b[50000],c[10001]={0},i,j,max=0,min=10001,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		for(j=a[i];j<b[i];j++)
		{
			c[j]++;
		}
		if(a[i]<min)min=a[i];
		if(b[i]>max)max=b[i];
	}
	for(i=min;i<max;i++)
	{
		if(c[i]==0)
		{
			printf("no\n");
			s++;
			break;
		}
	}
	if(s==0)printf("%d %d\n",min,max);
}