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
	int zs[N],i,n;
	int js[M],j,k;
	scanf("%d",&n);
	for(i=0,j=0;i<n;i++)
	{
		scanf("%d",&zs[i]);
		if(zs[i]%2==1)
		{
			js[j]=zs[i];
			j++;
		}
		else continue;
	}
	for(k=1;k<j;k++)
	{
		int t=js[k];
		for(i=k-1;i>=0;i--)
		{
			if(t<js[i])
			{
				js[i+1]=js[i];
				js[i]=t;
			}
			else
			{
				js[i+1]=t;
				break;
			}
		}
	}
	for(k=0;k<j-1;k++)
		printf("%d,",js[k]);
	printf("%d",js[j-1]);
	return 0;
}