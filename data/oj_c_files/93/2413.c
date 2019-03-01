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
	int a,i3,i5,i7;
	scanf("%d",&a);
	i3=0;i5=0;i7=0;
	if(a%3==0) i3=1;
	if(a%5==0) i5=1;
	if(a%7==0) i7=1;
	if(i3==1)
	{
		printf("3");
		if(i5==1)
		{
			printf(" 5");
			if(i7==1)
				printf(" 7");
		}
		else if(i7==1) printf(" 7");
	}
	else if(i5)
	{
		printf("5");
		if(i7) printf(" 7");
	}
	else if(i7)
	{
		printf("7");
	}
	else printf("n");
}