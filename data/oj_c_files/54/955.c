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


void fy(int n,int k)
{
int j,l,m;
for(j=1;l!=n;j++)
{
m=j;
for(l=0;l<n;l++)
{
if(m%(n-1)==0)
{m=m*n/(n-1)+k;
continue;
}
break;
}
}
printf("%d",m);
}
void main()
{
int n,k;
scanf("%d %d",&n,&k);
fy(n,k);
}