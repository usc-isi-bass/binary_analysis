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
int m,n,i;
int a[100],b[100];
double s[100];
scanf("%d",&m);

a[1]=2;
b[1]=1;
s[1]=2.0;
for(i=2;i<100;i++)
{
a[i]=a[i-1]+b[i-1];
b[i]=a[i-1];
s[i]=(a[i]+0.0)/b[i]+s[i-1];
}
for(i=1;i<=m;i++)
{
  scanf("%d",&n);
  printf("%.3lf\n",s[n]);
}
return 0;
}
