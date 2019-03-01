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
int m,i,j,n;
float a[100] ,b[100];
a[1]=1, a[2]=2,b[1]=2;
scanf ("%d",&m);
for (j=0;j<m;j++)
{
scanf ("%d",&n);
for (i=3;i<=n+1;i++)
{
a[i]=a[i-1]+a[i-2];
b[i-1]=b[i-2]+a[i]/a[i-1];
}
printf("%.3f\n",b[n]);
}
return 0;
}


