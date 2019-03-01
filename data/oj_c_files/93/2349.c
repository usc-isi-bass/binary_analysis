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
	int a,b,c,i;
	scanf("%d",&a);
	b=1;
		if(a%3==0)
		{printf("3");b++;}
		if(a%5==0)
		{
			if(b==1)
			{printf("5");b++;}
			else
			printf(" 5");
		}
		if(a%7==0)
		{
			if(b==1)
			{printf("7");b++;}
			else
			printf(" 7");
		}
	if(b==1)
		printf("n");
}
