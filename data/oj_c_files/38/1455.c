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

int main(){
int n,i,m[100],j;
double sum=0,a=0,sum2=0,result[100],sz[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&m[i]);
for(j=0;j<m[i];j++)
{scanf("%lf",&sz[j]);}
sum=0;
sum2=0;
for(j=0;j<m[i];j++)
{sum+=sz[j];}
a=sum/(m[i]*1.0);
for(j=0;j<m[i];j++)
{sum2+=(sz[j]-a)*(sz[j]-a);}
result[i]=sqrt(sum2/(m[i]*1.0));
}
for(i=0;i<n;i++)
{printf("%.5lf\n",result[i]);}
return 0;

}