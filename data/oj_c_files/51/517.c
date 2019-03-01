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
	int n,i,l,flag,sum,max,lab,len,j,b[10000];
	char a[10000],c;
	scanf("%d",&n);
	scanf("%c",&c);
	gets(a);
	len=strlen(a);
	l=0;
	lab=0;
	max=0;
	while (a[l]!=0)
	{
		sum=0;
		for (i=l;i<len;i++)
		{
			flag=1;
			for (j=0;j<n;j++)
			{
				if (a[l+j]!=a[i+j])
				{
					flag=0;
				}
			}
			if (flag==1)
				sum++;
		}
		if (sum>max)
		{
			max=sum;
		}
		b[l]=sum;
		l++;
	}
	if(max>1)
	{
	printf("%d\n",max);
	for (i=0;i<len;i++)
	{
		if(b[i]==max)
		{
			for (j=0;j<n;j++)
			{
				printf("%c",a[j+i]);
			}
			printf("\n");
		}
	}
	}
	else
		printf("NO");
	return 0;
}

