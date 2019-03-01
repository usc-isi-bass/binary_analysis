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
int k;
scanf("%d\n",&k);
int zu[k];
double x[k][1000];
int i,j;
for(i=0;i<k;i++)
{
scanf("%d\n",&zu[i]);
for(j=0;j<zu[i]-1;j++)
{
 scanf("%lf ",&x[i][j]);
}
 scanf("%lf\n",&x[i][zu[i]-1]);
}
double sum[k];
double xbar[k];
for(i=0;i<k;i++){ sum[i]=0;}
for(i=0;i<k;i++)
{ 
 for(j=0;j<zu[i];j++)
 { sum[i]+=x[i][j];}
 xbar[i]=sum[i]/zu[i];
}
double fc[k],a[k];
for(i=0;i<k;i++){ a[i]=0;}
for(i=0;i<k;i++)
{
 for(j=0;j<zu[i];j++)
 {
   a[i]+=(x[i][j]-xbar[i])*(x[i][j]-xbar[i]);
  }
 fc[i]=sqrt(a[i]/zu[i]);
 printf("%.5lf\n",fc[i]);
}
return 0;
}
 

  
