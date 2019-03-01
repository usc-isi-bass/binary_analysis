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
	scanf("%d",&n);
	a=(int)(n/100);
	b=(int)((n%100)/50);
	c=(int)(((n%100)%50)/20);
	d=(int)((((n%100)%50)%20)/10);
    e=(int)(((((n%100)%50)%20)%10)/5);
	f=(int)(((((n%100)%50)%20)%10)%5);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}