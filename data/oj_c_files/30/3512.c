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
int a,b,c,m,n,i;
scanf("%d",&n);
for(i=1,m=0;i<=n;i++)
{
a=i%7;
b=i%10;
c=i/10;
if(a!=0&&b!=7&&c!=7)
m=m+i*i;
}
printf("%d",m);
return 0;
}