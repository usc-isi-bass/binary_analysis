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
	int i,k,p=0,max;
	int a[100]={0};
	char x;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		x=getchar();
			k=i;
		if(x != ',')
			break;
	}
	if(k==0)
		printf("No\n");
	if(k != 0)
	{
		for(i=1;i<=k;i++)
		{
			if(a[0]==a[i])
				p++;
			else break;
		}
		if(p==k)
			printf("No\n");
		else
		{
			max=a[0];
			for(i=0;i<=k;i++)
			{
			if(max<a[i])
				max=a[i];
			}
		for(i=0;i<=k;i++)
		{
			if(a[i]==max)
				a[i]=0;
		}
		max=a[0];
		for(i=0;i<=k;i++)
		{
			if(max<a[i])
				max=a[i];
		}
		printf("%d\n",max);
		}
		
	}
}