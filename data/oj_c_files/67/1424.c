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
int n,i;
double tm,tmt,c,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%lf %lf",&tm,&tmt);
a[i]=tmt/tm;
}
for(i=1;i<n;i++)
{
c=a[i]-a[0];
if(c>0.05){printf("better\n");}
if(c<-0.05){printf("worse\n");}
if(c>=-0.05&&c<=0.05){printf("same\n");}
}
return 0;
}