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

int f(int s)
{
	int t;
	for(t=3;t<=(int)sqrt(s);t=t+2)
		if(s%t==0)
			break;
	if(t>(int)sqrt(s))
		return 1;
	else 
		return 0;
}

void main()
{
	int m,k,h,i,d,r=0;
	scanf("%d",&d);
	for(m=6;m<=d;m=m+2)
	{
	   for(i=3;i<(m/2+1);i=i+2)
	   {
	    	k=i;
	    	h=m-i;
	    	r=0;
		    if(f(k) && f(h))
			{
			   printf("%d=%d+%d\n",m,k,h);
			   break;
			}
	   }
	}
}
