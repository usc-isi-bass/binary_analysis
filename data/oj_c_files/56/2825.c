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
	int n,m,a,b,c,d,e;
	scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
	e=n-a*10000-b*1000-c*100-d*10;
if(a>0)m=e*10000+d*1000+c*100+b*10+a;
if(a==0&&b>0)m=e*1000+d*100+c*10+b;
if(a==0&&b==0&&c>0)m=e*100+d*10+c;
if(a==0&&b==0&&c==0&&d>0)m=e*10+d;
if(a==0&&b==0&&c==0&&d==0)m=n;
printf("%d",m);
}