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
	int m,n,a,b,c;
	a=3;b=5;c=7;
	scanf("%d",&m);
	if(m%3==0) 
	{
		printf("%d",a);
		if(m%5==0) printf(" %d",b);
		{
			if(m%7==0) printf(" %d",c);
		}
	}
	else if(m%5==0) 
	{
		printf("%d",b);
		if(m%3==0) printf(" %d",a);
		{
			if(m%7==0) printf(" %d",c);
		}
	}
	else if(m%7==0) 
	{
		printf("%d",c);
		if(m%3==0) printf(" %d",a);
		{
			if(m%5==0) printf(" %d",b);
		}
	}
	else printf("n");
	printf("\n");
}
	
	
