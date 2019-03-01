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
	int a[1000],n,k,i,j,l,m;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	l=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==i)
				continue;
			else
			{
				m=a[i]+a[j];
				if(m==k)
				{
					l++;
					break;
				}
			}
		}
		if(l>0)
			break;
	}
	if(l==0)
		printf("no");
	else
		printf("yes");
	return 0;
}
