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


struct data
{
	int a[100];
	char num[100][15];
}data;

void main()
{
	int i,b,k=0,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",data.num[i],&data.a[i]);
		if(data.a[i]>=60) k++;
	}
	for(j=0;j<k;j++)
	{
		b=0;
		for(i=0;i<n;i++)
		{
			if(data.a[i]>data.a[b])
			b=i;
		}
		printf("%s\n",data.num[b]);
		data.a[b]=0;
	}
	for(i=0;i<n;i++)
	{
		if(data.a[i]!=0)
			printf("%s\n",data.num[i]);
	}
}