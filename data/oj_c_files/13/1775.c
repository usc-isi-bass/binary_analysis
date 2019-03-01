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
int a[20000];
int n,i,j,p;
scanf("%d",&n);
for (i=1;i<=n;i++)
{
scanf("%d",&a[i]);
p=0;
for (j=1;j<i;j++)
{
if (a[j]==a[i])
{
p=1;
}
}
if (p==0 & i==1)
{
printf("%d",a[i]);
}
if (p==0 & i!=1)
{
printf(" %d",a[i]);
}
}
return 0;
}
