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

int main ()
{
	int w,i,a;
	scanf("%d",&w);
	if(w==7)
	{
		printf("1\n");
		printf("10\n");
	}
	if(w==6)
	{
		printf("5\n");
	}
	if(w==2)
	{
	    printf("9\n");
		printf("12\n");
	}
	if(w==5)
	{
		printf("8\n");
	}
	if(w==4)
	{
		printf("2\n");
		printf("3\n");
		printf("11\n");
	}
	if(w==1)
	{
		printf("4\n");
		printf("7\n");
	}
	if(w==3)
	{
		printf("6\n");
	}

	return 0;
}

