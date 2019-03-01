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
	int n,a,b,c,d,e,f;
	scanf("%d\n",&n);
	if(n/100!=0)
		a=n/100;
	else a=0;
	
	if((n-a*100)/50!=0)
		b=(n-a*100)/50;
	else b=0;
	if((n-a*100-b*50)/20!=0)
		c=(n-a*100-b*50)/20;
	else c=0;
	if((n-a*100-b*50-c*20)/10!=0)
		d=(n-a*100-b*50-c*20)/10;
	else d=0;
	if((n-a*100-b*50-c*20-d*10)/5!=0)
		e=(n-a*100-b*50-c*20-d*10)/5;
	else e=0;

	f=n-a*100-b*50-c*20-d*10-e*5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
			
}