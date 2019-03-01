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
int n,k,m,i,a,j,p;
scanf("%d %d",&n,&k);
m=0;
shuo: m=m+1;
i=m;
for(j=1;j<n;j++)
{
p=n*i+k;
a=p%(n-1);
if(a!=0)
goto shuo;
else
i=p/(n-1);
}
printf("%d",i*n+k);
}