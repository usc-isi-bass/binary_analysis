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
	int a,b,c,u;

	scanf("%d",&u);
	a=u%3;
	b=u%5;
	c=u%7;

	if (a>0) 
	{
		if (b>0)
			if (c>0) printf("n");
			else printf("7");
		else 
			if (c>0) printf("5");
			else printf("5 7");
	}
	else 
	{
		if (b>0)
			if (c>0) printf("3");
			else printf("3 7");
		else 
			if (c>0) printf("3 5");
			else printf("3 5 7");
	}

}