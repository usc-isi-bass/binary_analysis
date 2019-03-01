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
	int n,i=0;
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("3");
		i=1;
	}
	if(n%5==0)
	{
		if(i==0)
		{
			printf("5");
			i=1;
		}
		else if(i==1)
		{
			printf(" 5");
			
		}
	}
	if(n%7==0)
	{
if(i==0)
		{
			printf("7");
			i=1;
		}
		else if(i==1)
		{
			printf(" 7");
			
		}
	}
	if(i==0)
		printf("n");
	
}