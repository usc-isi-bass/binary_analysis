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

main()
{
	int a[25],b[25],i,j,k,c,n;
	scanf("%d",&n);
	for(i=0;i<25;i++)
	{
		b[i]=1;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]<=a[j]) 
			{
				if(b[i]<b[j]+1) b[i]=b[j]+1;
			}
		}
	}
	for(j=0;j<i;j++)
	{
		c=0;
		for(k=0;k<i;k++)
		{
			if(b[k]>b[j]) c=1;
		}
		if(c==0)
		{
			printf("%d\n",b[j]);break;
		}
	}
	return 0;
}
