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
	int i,a,b,c;
	a=3;b=5;c=7;
	scanf("%d",&i);
	if(i%3==0)
	{
		if(i%5==0&&i%7==0)
			printf("%d %d %d",a,b,c);
		else if(i%5==0&&i%7!=0)
			printf("%d %d",a,b);
		else if(i%5!=0&&i%7==0)
			printf("%d %d",a,c);
		else printf("%d",a);
	}
	else if(i%5==0)
	{
		if(i%7==0)
			printf("%d %d",b,c);
		else printf("%d",b);
	}
	else if(i%7==0)
	{
		printf("%d",c);
	}
	else printf("n");
}