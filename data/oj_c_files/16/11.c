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


main ()
{
int a,b,n,s,i;
scanf("%d",&a);
if(a==0)printf("0");
n=0;
b=a;
while(b!=0) 
{
 b=(b/10);
 n=n+1;
}
n=n-1;
for(i=0;i<=n;i++)
{
 b=a%10;
 a=a/10;
 printf("%d",b);
}
}