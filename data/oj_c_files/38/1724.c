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
int k,n,i,j;
double *p,a=0,s=0,sum=0;
double x[1000];
p=x;
scanf("%d",&k);
for(i=0;i<k;i++){
   scanf("%d",&n);
   for(j=0;j<n;j++){
      scanf("%lf",p+j);
      }
   for(j=0;j<n;j++){
      a+=*(p+j);
      }
   a=a/n;
   for(j=0;j<n;j++){
      sum+=pow((*(p+j)-a),2);
      }
   s=sqrt(sum/n);
   printf("%.5lf\n",s);
   a=0;s=0;sum=0;
   }
return 0;
}
