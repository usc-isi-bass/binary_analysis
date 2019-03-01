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
	int m,i,j,k=0,s;
	int a[10000];
	int *p=a;
	
	scanf("%d",&m);

	for(i=3;i<m;i+=2)
	{
		s=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				s=1;
			}
		}
		if(s);
		else
		{
			*(p+k)=i;
			k++;
		}
	}
	for(i=0;i<=k;i++)
	{
		for(j=i;j<=k;j++)
		{
			if(a[i]+a[j]==m)
				printf("%d %d\n",a[i],a[j]);
		}
	}
	return 0;
}