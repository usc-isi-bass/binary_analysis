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
	int n,i,j,p=0,k=0;
	int a[350],num[350],index[350]={0};
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[j]==a[i])
				p++;
		}
		if (p>=1&&index[a[i]]==0)
		{
			num[k]=a[i];
			k++;
			index[a[i]]=1;
		}
		p=0;
	}
	for (i=0;i<k-1;i++)
	{
		printf("%d,",num[i]);
	}
	printf("%d",num[k-1]);
}

