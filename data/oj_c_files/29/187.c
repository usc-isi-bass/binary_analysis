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
int n,i,j,o;
float a=1,b=1,c=0,d=1,p,s=0,e;
scanf("%d",&n);
for(j=0;j<n;j++)
{
	scanf("%d",&o);
	s=0;
	a=1;
	b=1;
	c=0;
	d=1;
for(i=0;i<o;i++)
{
p=(a+b)/(c+d);
s=s+p;
e=a;
a=b;
b=e+a;
e=c;
c=d;
d=e+c;
}
printf("%.3f\n",s);
}


return 0;
}