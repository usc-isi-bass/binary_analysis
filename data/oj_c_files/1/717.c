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
	int zy(int a,int b);
	int j,n,m,sum;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&m);
		sum=zy(2,m);
		printf("%d\n",sum);
	}
}
	int zy(int a,int b)
	{
		int i,c,t=1;
		c=0;
		if(a==0)
			c=c+1;
		else
		{for(i=a;i*i<=b;i++)
		{
			if(b%i==0)
				c=zy(i,(b/i))+c;
		}
		if(i*i>b)
			c=c+1;}
		return(c);
	}