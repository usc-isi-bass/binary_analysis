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
	int n,a,b,c,d;
scanf("%d",&n);
a=n%10;
n=n/10;
if(n==0)
{
	printf("%d",a);
}
else
{
	b=n%10;
	n=n/10;
	if(n==0)
{
	printf("%d%d",a,b);
}
else
{
	c=n%10;
n=n/10;
d=n;
if(n==0)
{
	printf("%d%d%d",a,b,c);
}
else
{
printf("%d%d%d%d",a,b,c,d);
}
}
}
return 0;
}