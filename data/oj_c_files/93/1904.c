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
	int num;
	scanf("%d",&num);
	if(num%3==0)
	{
		printf("3");
		if(num%5==0)
		{
			printf(" %d",5);
			if(num%7==0)
				printf(" %d",7);
		}
		else if(num%7==0)
			printf(" %d",7);
	}
	else if(num%5==0)
		{
			printf("%d",5);
			if(num%7==0)
				printf(" %d",7);
		}
	else if(num%7==0)
			printf("%d",7);
	else
		printf("n");
	return 0;
}
