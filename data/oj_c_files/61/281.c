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

int sum(int m);
int main()
{
int m,n,i,a[100];
scanf("%d",&n);
a[1]=1;a[2]=1;
for(i=1;i<=n;i++)
{
scanf("%d",&m);
printf("%d\n",sum(m));
}
}
int sum(int m)
{
int i,a[100];
for(i=3;i<=21;i++)
{
a[1]=1;a[2]=1;
a[i]=a[i-1]+a[i-2];
}
return a[m];
}

