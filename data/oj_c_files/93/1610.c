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
	int n,flag=0;
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("3");
		flag=1;
	}
	if(n%5==0)
	{
		if(flag)
			printf(" ");
		printf("5");
		flag=1;
	}
	if(n%7==0)
	{
		if(flag)
			printf(" ");
		printf("7");
		flag=1;
	}
	if(flag==0)
		printf("n");
	return 0;
}