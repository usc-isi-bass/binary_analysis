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
    int n,k,max=1,t=1,a,b,x,y,o,i;
	scanf("%d%d",&n,&k);
	while(1==1)
	{
		o=0;
		x=t;
		for(i=1;i<=n;i++)
		{
			y=x;
			a=x/n;
			b=x-a*n;
			if(b!=k)
			{
				o=1;
				break;
			}
			else
			    x=y-b-a;
		}
		if(o==0 && a>=1)
		{
			printf("%d",t);
			break;
		}
		else
		    t=t+1;
	}
	return 0;
}