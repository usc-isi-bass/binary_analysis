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
	int n,a=1,i;
	scanf("%d",&n);
	if(n%3==0&&n%5==0&&n%7==0)
		printf("3 5 7");
	else if(n%3==0&&n%5==0)
		printf("3 5");
	else if(n%3==0&&n%7==0)
		printf("3 7");
	else if(n%5==0&&n%7==0)
		printf("5 7");
	else if(n%5==0)
		printf("5");
	else if(n%7==0)
		printf("7");
	else if(n%3==0)
		printf("3");
	else
	{
		for(i=2;i<=n-1;i++)
		{
			if(n%i==0)
				a=0;
		}
		if(a==1)printf("n");
	}
}
