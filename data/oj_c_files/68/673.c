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

int fun(int);
void main()
{
	int i,n,a,j,b;
	scanf("%d",&n);
	for(j=6;j<=n;j+=2)
		for(i=2;;i++)
		{
			a=fun(i);
	        b=fun(j-i);
     		if(a&&b)
			{
	    		printf("%d=%d+%d\n",j,i,j-i);break;
			}
		}
}
int fun(int t)
{
	int i,p=1;
	for(i=2;i<=(int)sqrt(t);i++)
	{
		if(t%i==0)
		{
			p=0;break;
		}
	}
	return p;
}
