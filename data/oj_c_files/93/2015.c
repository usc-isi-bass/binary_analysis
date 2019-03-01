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
	int k,flag3=0,flag5=0,flag7=0;
	scanf("%d",&k);
	if(k%3==0)
	{printf("3");
	flag3=1;
	}
	if(k%5==0)
	{flag5=1;
		if(flag3==0) printf("5");
		else printf(" 5");
	}
	if(k%7==0)
	{flag7=1;
		if(flag3==1||flag5==1)
			printf(" 7");
		else printf("7");
	}
	if(flag3==0&&flag5==0&&flag7==0) printf("n");
	printf("\n");		
}


