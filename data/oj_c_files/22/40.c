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
	int a[300],n,i,s=0,t,j;
	char b;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		b=getchar();
		if(b!=',')
			break;
	}
	n=i;
	for(i=1;i<=n;i++)
	{
		if(a[i]!=a[0])
		{s=1;
		break;}
	}
	if(s==0)
		printf("No");
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=n;j>i;j--)
			{
				if(a[j]>a[j-1])
				{
					t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]!=a[0])
			{	printf("%d",a[i]);
			break;
			}
		}

	}
}

		