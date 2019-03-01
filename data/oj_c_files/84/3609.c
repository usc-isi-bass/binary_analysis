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
{int n,a,b,c,i;
scanf("%d\n",&n);
scanf("%d\n%d\n",&a,&b);
if(b>a)
{
c=a;
a=b;
b=c;
}
for(i=1;i<=n-2;i++)
{
scanf("%d\n",&c);
if(c>a)
{b=a;
a=c;}
else if(c>b)
b=c;
}
printf("%d\n%d\n",a,b);
return 0;
}
