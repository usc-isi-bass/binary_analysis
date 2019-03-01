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

int huiwen(int i)
{
	int z=0;
	while(i)
	{
		z=z*10+i%10;
		i=i/10;
	}
	return(z);
}
main()
{
	int i,j,k=0,flag=0,l,a,b,c[1000],t;
	scanf("%d%d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		t=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)t=0;
		}
		
		if(t)
		{
			l=huiwen(i);
			if(l==i)
			{
				k++;
				c[k]=i;
			}
		}
	}
	if(k==0)
	{
		printf("no");
	}
	else
	{
		for(i=1;i<=k;i++)
		{
			if(flag)
			{
				printf(",");
			}
			printf("%d",c[i]);
			flag=1;
		}
	}
}
