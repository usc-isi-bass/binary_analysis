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
	int n,i;
	scanf("%d",&n);
	if(n%3==0&&n%5==0&&n%7==0)
	{
		printf("3 5 7");
	}
	else if(n%3==0&&n%5==0)
	{
		printf("3 5");
	}
	else if(n%3==0&&n%7==0)
	{
		printf("3 7");
	}	
	else if(n%5==0&&n%7==0)
	{
		printf("5 7");
	}
	else {
		for(i=3;i<8;i=i+2)
		{
		if(n%i==0)
	{
		printf("%d",i);
	}
		}
	}
	if(n%3!=0&&n%5!=0&&n%7!=0)
	{
		printf("n");
	}
     return 0;
}
