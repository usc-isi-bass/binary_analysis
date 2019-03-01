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
	int x,y;
	int a,b,c;
	scanf ("%d",&x);
	a=x/100;
    b=(x-a*100)/10;
	c=x-a*100-b*10;
	y= c*100+b*10+a;
	
	printf ("%d\n",y);
	return 0;
}