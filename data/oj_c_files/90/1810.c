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

f(int a,int b)
{
	int s=0,x,y;
	if(a==0||a==1||b==1)
	{
		s=1;
	}

	else
	{
		if(a>=b)
		{
	 	   x=f(a-b,b);
	       y=f(a,b-1);
		}
		else
		{
			x=0;
			y=f(a,a);
		}
		s=x+y;
	}
	return s;	
}



int main()
{
	int m,n,k,i;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&m, &n);
		printf("%d\n",f(m,n));
	}
	return 0;
}