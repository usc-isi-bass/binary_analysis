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
	int z;
	int a=0,b=0,c=0;
	scanf("%d",&z);
	if(z%3==0)
		a=3;
	if(z%5==0)
		b=5;
	if(z%7==0)
		c=7;
	if(a!=0) 
		printf("%d",a);
	if(b!=0)
		{if(a!=0)
			printf(" %d",b);
		else
		    printf("%d",b);}
	if(c!=0)
		{if(a!=0 || b!=0)
			printf(" %d",c);
		else
		    printf("%d",c);}
	if(a+b+c==0)
		printf("n");
	return 0;
}