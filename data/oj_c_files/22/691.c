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
	int a,b,c;
char d;
	scanf("%d",&a);
b=0;
c=0;
for( ; ; )
{
d=getchar();
if(d!=',')
break;
scanf("%d",&b);
if(b>a)
{c=a;
a=b;}
if(b<a&&b>c)
c=b;
}
if(c==0)
printf("No");
else
printf("%d",c);
	return 0;
}
