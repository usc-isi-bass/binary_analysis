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
	int a;
	scanf("%d",&a);
	if(a%3==0)
	{
		if(a%5==0)
		{
			if(a%7==0)
				printf("%d %d %d\n",3,5,7);
			else
				printf("%d %d\n",3,5);
		}
		else
		{
			if(a%7==0)
				printf("%d %d\n",3,7);
			else
				printf("%d\n",3);
		}
	}
	else
	{
     if(a%5==0)
		{
			if(a%7==0)
				printf("%d %d\n",5,7);
			else
				printf("%d\n",5);
		}
		else
		{
			if(a%7==0)
				printf("%d\n",7);
			else
				printf("n\n");
		}
	}
}