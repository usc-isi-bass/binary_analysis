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
	int m;
	int a[10000];
	int i,j,k;
	for(i=2,k=0;i<10000;i++)
	{
		for(j=2;j<=i;)
		{
			if(i%j==0)
				break;
			j++;
		}
		if(j==i)
		{
			a[k]=i;
			k++;
		}
	}
	scanf("%d",&m);
	for(i=0;a[i]<=m;i++)
	{
		for(j=i;a[j]<=m-a[i];j++)
		{
			if(a[i]+a[j]==m)
			{
				printf("%d %d\n",a[i],a[j]);
			}
		}
	}
	return 0;
}