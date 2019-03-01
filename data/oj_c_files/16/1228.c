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
	int a,b,c,d,e;
	scanf("%d",&a);
	if (a>999)
	{	b=a/1000;
	    c=(a-b*1000)/100;
		d=(a-b*1000-c*100)/10;
		e=(a-b*1000-c*100-d*10)/1;
		printf("%d%d%d%d",e,d,c,b);}
	else if (a>99)
	{	b=a/100;
		    c=(a-b*100)/10;
			d=(a-b*100-c*10)/1;
			printf("%d%d%d",d,c,b);}
	else if (a>9)
	{	b=a/10;
	    c=(a-b*10)/1;
			printf("%d%d",c,b);}
	else
		printf("%d",a);
	return 0;
		
    	
}