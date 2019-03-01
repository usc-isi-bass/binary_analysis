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
	int a,b,c,d,e,f,sum;
	scanf("%d",&sum);
    if(sum<1000)
	{
		a=sum/100;
		sum=sum-100*a;
		b=sum/50;
		sum=sum-50*b;
		c=sum/20;
		sum=sum-20*c;
		d=sum/10;
		sum=sum-10*d;
		e=sum/5;
		sum=sum-5*e;
		f=sum;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	
return 0;
}