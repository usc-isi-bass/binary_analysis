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
	int m,a,b,c,d,e,f;
	int a1,b1,c1,d1,e1;
	scanf("%d",&m);
	a=m/100;
	printf("%d\n",a);
	a1=m-a*100;
	b=a1/50;
	printf("%d\n",b);
	b1=a1-b*50;
	c=b1/20;
	printf("%d\n",c);
	c1=b1-c*20;
	d=c1/10;
	printf("%d\n",d);
	d1=c1-d*10;
	e=d1/5;
	printf("%d\n",e);
	e1=d1-e*5;
	f=e1;
	printf("%d\n",f);

}