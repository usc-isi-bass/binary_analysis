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
	int n,i,j,k,num[1000];
	char a[1000][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		num[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(num[j]>num[j-1])
			{
				k=num[j];
				num[j]=num[j-1];
				num[j-1]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(a[i])==num[0])
		{
			printf("%s\n",a[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(a[i])==num[n-1])
		{
			printf("%s\n",a[i]);
			break;
		}
	}
	return 0;
}