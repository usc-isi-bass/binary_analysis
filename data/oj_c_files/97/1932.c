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
	int x,a,b,c,d,e,f;
	scanf("%d",&x);
    a=(int)ceil(x/100);
	b=(int)ceil((x-a*100)/50);
	c=(int)ceil((x-a*100-b*50)/20);
	d=(int)ceil((x-a*100-b*50-c*20)/10);
	e=(int)ceil((x-a*100-b*50-c*20-d*10)/5);
	f=(int)ceil((x-a*100-b*50-c*20-d*10-e*5)/1);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}