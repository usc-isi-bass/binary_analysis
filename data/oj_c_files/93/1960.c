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
	int n,a,b,c;
	scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a!=0&&b!=0&&c!=0)
		printf("n\n");
	else if(a==0)
		printf("3");
	if(b==0)
	{if(a==0)
	printf(" 5");
	else printf("5");}
	if(c==0)
	{if(b==0||a==0)
		printf(" 7");
		else printf("7");}
	return 0;
}