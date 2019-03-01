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
	int n,i,j,a[310],l;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&l);
		for(j=1;j<=i-1;j++)
		{
			if(a[j]==l) 
			{
				l=-1;
				break;
			}
		}
		a[i]=l;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==-1) continue;
		else
		{
			printf("%d",a[i]);
			i++;
			break;
		}
	}
	for(;i<=n;i++)
	{
		if(a[i]==-1) continue;
		else
		{
			printf(",%d",a[i]);
		}
	}
}