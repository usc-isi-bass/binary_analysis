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
	int n,m,p;
	scanf("%d",&n);
	m=n*n;
	int i,j=0,k,x=0,a,b,c,d,e;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&p);
		if(i%n==1)
		{
			j++;
		}
		k=i%n;
		while(x==0)
		{
			if(p==0)
			{a=j;
		     b=k;
			 x=1;
			}
			else
			{
				break;
			}
		}
		
		if(p==0)
		{
			c=j;
			d=k;
		}
	}
	e=(c-a-1)*(d-b-1);
	printf("%d\n",e);
	return 0;
}
