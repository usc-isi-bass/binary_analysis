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
	int n;
	scanf("%d",&n);
	if(n%3==0)
	{
		if(n%5==0&&n%7==0)
			printf("3 5 7");
		else if(n%5==0&&n%7!=0)
			printf("3 5");
		else if(n%7==0&&n%5!=0)
			printf("3 7");
		else if(n%5!=0&&n%7!=0)
			printf("3");

	}
	if(n%5==0)
	{
		if(n%7==0&&n%3!=0)
			printf("5 7");
		else if(n%7!=0&&n%3!=0)
			printf("5");
	}
	if(n%7==0)
	{
		if(n%3!=0&&n%5!=0)
			printf("7");
	}
	if(n%3!=0&&n%5!=0&&n%7!=0) printf("n");
}