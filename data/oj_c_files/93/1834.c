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
	int n=0, x;
	scanf("%d", &x);
	if(x%3==0)
	{
		printf("3");
		n++;
	}
	if(x%5==0)
	{
		if(n!=0) printf(" ");
		printf("5");
		n++;
	}
	if(x%7==0)
	{
		if(n!=0) printf(" ");
		printf("7");
		n++;
	}
	if(n==0) printf("n");
	return 0;
}