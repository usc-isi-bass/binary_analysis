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
	char a[50],b[50],c;
	scanf("%s %s",a,b);
	int n,i,j,m;
	n=strlen(a);
	m=strlen(b);
	if(n==m)
	{
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					c=a[j];
					a[j]=a[j+1];
					a[j+1]=c;
				}
			}
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(b[j]>b[j+1])
				{
					c=b[j];
					b[j]=b[j+1];
					b[j+1]=c;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				break;
			}
		}
		if(i==n)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}

			
