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

double cao(int n)
{
int i;
double tmp,tt=1,ttt=2,s=0,ss=0;
for(i=1;i<=n;i++)
{ss=ttt/tt;tmp=tt;tt=ttt,ttt=ttt+tmp;
s=s+ss;}
return s;
}
int main()
{
int n,i,a[99];
double ccc;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ccc=cao(a[i]);
printf("%.3lf\n",ccc);
}
return 0;
}