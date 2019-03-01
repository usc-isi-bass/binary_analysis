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
	int x,i=0;
	scanf("%d",&x);
	if(x%3==0)
	{
		i=i+1;
		printf("3");
	}
	if(x%5==0)
	{
		i=i+1;
		if(i>=2)
			printf(" 5");
		else
			printf("5");
	}
	if(x%7==0)
	{
		i=i+1;
		if(i>=2)
			printf(" 7");
		else
			printf("7");
	}
	if(i==0)
		printf("n");
}
