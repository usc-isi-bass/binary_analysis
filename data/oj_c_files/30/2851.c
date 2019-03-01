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

int main ()
{
	int i,a,b,c,n,sum;
	i=1;
	sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
	    a=i%10;
	    b=(i%100-a)/10;
    	c=(i%1000-b*10-a)/100;
		if((a==7)||(b==7)||(c==7)||(i%7==0))
		{
		   i++;
		   continue;
		}
		sum=sum+i*i;
		i++;
	}
	printf("%d",sum);
	return 0;
}