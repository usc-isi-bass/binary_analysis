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
    int a,b,c,d,x,y;
	scanf("%d",&x);
	a=x/1000;
	b=(x-1000*a)/100;
	c=(x-1000*a-100*b)/10;
	d=x-1000*a-100*b-10*c;
	if(a==0) 
	{
		y=d*100+c*10+b;
		if(b==0) 
		{
	      y=d*10+c;
		  if(c==0) y=d;
		}
	}
	else y=d*1000+c*100+b*10+a;
	if(d!=0) printf("%d",y);
	if((d==0)&&(c!=0)) printf("0%d",y);
	if((d==0)&&(c==0)&&(b!=0)) printf("00%d",y);
	if((d==0)&&(c==0)&&(b==0)) printf("000%d",y);
	return 0;
}
