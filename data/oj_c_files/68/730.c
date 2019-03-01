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

int issushu(int x)
{
double y;
int i,flag;
flag=1;
y=sqrt((double)x);
for(i=3;i<=y;i+=2)
if(x%i==0)flag=0;
return flag;
}
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=6;i<=n;i+=2)
for(j=3;j<=i/2;j+=2)
if(issushu(j) && issushu(i-j))
{
printf("%d=%d+%d\n",i,j,i-j);
break;
}
return 0;
}