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
	int n,b=0,sp=0;

	scanf("%d",&n);
	if(n%3==0) 
	{
		printf("3");
		sp=1;
		b=1;
	}
	if(n%5==0)
	{
		if(sp) printf(" ");
		printf("5");
		sp=1;
		b=1;
	}
	if(n%7==0)
	{
		if(sp) printf(" ");
		printf("7");
		b=1;
	}
	if(!b) printf("n");
}