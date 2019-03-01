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

int x(int a,int b);
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",x(a,b));
}
int x(int a,int b)
{
	if(a>b)
	{a=a/2;
	return x(a,b);}
    if(a<b)
	{b=b/2;
	return x(a,b);}
	if(a=b)
	return a;
}