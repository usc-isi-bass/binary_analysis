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
	int n,num;
	scanf("%d",&num);
	if(num%3==0)
	{if(num%5==0)
	{if(num%7==0)
	printf("%d %d %d",3,5,7);
	else
		printf("%d %d",3,5);
	}
	else if(num%7==0)
		printf("%d %d",3,7);
	else printf("%d",3);
	}
	else
		if(num%5==0)
		{if(num%7==0)
		printf("%d %d",5,7);
		else printf("%d",5);
		}
		else if(num%7==0)
			printf("%d",7);
		else
			printf("n");
}




