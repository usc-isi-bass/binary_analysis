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
	int num[300];
	char c;
	int i,j,temp;
	for(i=0;;i++)
	{
		scanf("%d%c",&num[i],&c);
		if(c!=',')
			break;
	}
	int n=i+1;
	for(i=1;i<=n-1;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			if(num[j]>num[j-1])
			{
				temp=num[j];
				num[j]=num[j-1];
				num[j-1]=temp;
			}
		}
	}
	int max=num[0],judge=1;
	for(i=0;i<n;i++)
	{
		if(num[i]<max)
		{
			judge=0;
			printf("%d\n",num[i]);
			break;
		}
	}
	if(judge==1)
		printf("No\n");
}