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

main()
{
int m=3,i,n,a,b;
scanf("%d",&n);
while(m<=n/2)
{for(i=2;i<=m-1;i++)
if(m%i==0)break;
if(i>=m)
{a=n-m;
for(i=2;i<=a-1;i++)
if(a%i==0)break;
if(i==a)
printf("%d %d\n",m,a);}
m=m+2;
}
}

