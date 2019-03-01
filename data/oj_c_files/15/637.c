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
long i,j,x1,x2,n,d,n2,s;
int a;
scanf("%d",&n);
a=1;i=0;
while (a!=0)
{
i++;
scanf("%d",&a);
}
x1=i;
n2=n*n;
x2=i;d=0;
for (j=i;j<=n2;j++)
{
scanf("%d",&a);
if (a==255) d++;
if (a==0) 
{
x2++;
x2=x2+d;
d=0;
}
}
s=((x2-x2%n)/n-(x1-x1%n)/n-1)*(abs(x1%n-x2%n)-1);
printf("%ld",s);
}