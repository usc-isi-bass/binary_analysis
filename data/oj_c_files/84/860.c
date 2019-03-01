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
int n,i,r,fm,sm;
int shu[100];
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d\n",&shu[i]);
for(i=n-1;i>0;i--)
{
for(r=0;r<i;r++)
{
if(shu[r]>shu[r+1])
{
int tmp;
tmp=shu[r+1];
shu[r+1]=shu[r];
shu[r]=tmp;
}
}
}
fm=shu[n-1];
sm=shu[n-2];
printf("%d\n",fm);
printf("%d\n",sm);
return 0;
}

