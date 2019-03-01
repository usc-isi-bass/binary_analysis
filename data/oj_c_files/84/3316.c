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
 int   n,i=0,b,max1=0,max2=0;
scanf("%d",&n);
while(i<=n)
{
scanf("%d",&b);
if(b>max1)
{
 max2=max1;
 max1=b;
 }
else if(max1>b&&b>max2)
{
max1;
max2=b;
}
else if(max2>b)
{
max1;
max2;
}
i++;
}
printf("%d\n%d\n",max1,max2);
return 0;
}
