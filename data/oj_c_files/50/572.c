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
	int w;
	scanf("%d",&w);
	if((w+7)%7==0)
     printf("1\n");
	 if((w+10)%7==0)
	 printf("2\n3\n");
	 if((w+13)%7==0)
	 printf("4\n");
	 if((w+15)%7==0)
	 printf("5\n");
	 if((w+18)%7==0)
		 printf("6\n");
	 if((w+20)%7==0)
		 printf("7\n");
	 if((w+23)%7==0)
		 printf("8\n");
	 if((w+26)%7==0)
		 printf("9\n12\n");
	 if((w+28)%7==0)
		 printf("10\n");
	 if((w+31)%7==0)
		printf("11\n");
	
 return 0;
}