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
	int n,a=0,b=0,c=0,d=0,i,t;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&t);
		if(t<=18)
			a++;
		else if(t>=19&&t<=35)
			b++;
		else if(t>=36&&t<=60)
			c++;
		else if(t>=61)
			d++;
	}
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",(double)a/(double)n*100,(double)b/(double)n*100,(double)c/(double)n*100,(double)d/(double)n*100);
}


