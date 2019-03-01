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
int k,i,a,b,c,d,max1,max2;
scanf("%d %d %d",&k,&a,&b);
if(a>b)
max1=a,max2=b;
else
max1=b,max2=a;
for(i=1;i<=k-2;i++)
{
scanf("%d",&c);
if(c>max1)
d=max1,max1=c,max2=d;
else
if(c>max2)
max2=c;
}
printf("%d\n",max1);
printf("%d\n",max2);
}