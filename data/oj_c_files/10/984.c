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

typedef struct
{
	int file;
	int reign;
}missile;
void main()
{
	int n,i,j,max=0;
	missile a[30];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i].file);
	}
	a[n].reign=1;
	for(i=n-1;i>=1;i--)
	{
		a[i].reign=1;
		for(j=i+1;j<=n;j++)
		{
			if(a[j].file<=a[i].file)
			{
				if(a[j].reign+1>a[i].reign)
				{
					a[i].reign=a[j].reign+1;
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(a[i].reign>max)
		{
			max=a[i].reign;
		}
	}
	printf("%d",max);
}
