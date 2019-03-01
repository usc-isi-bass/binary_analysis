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
	int n,a[20000],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{for(j=i+1;j<n;j++)
	if(j==i)
		continue;
	else if(a[j]==a[i])
		a[j]=-1;

	}
	for(i=0;i<n;i++)
	{if(a[i]==-1)
	continue;
	else
		{printf("%d",a[i]);
break;}
	}
         for(j=i+1;j<n;j++)
	{if(a[j]==-1)
	continue;
	else
		printf(" %d",a[j]);
	}

	return 0;
}
