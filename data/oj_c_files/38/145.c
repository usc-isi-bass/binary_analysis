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
 int n,k,i,j; 
 scanf("%d",&k);
 for(i=1;i<=k;i++)
  {
   double a=0.0,x[200],*px,s1=0.0,s=0.0;
   scanf("%d",&n);
   for(j=0;j<n;j++)
     x[j]=0.0;
   px=x;
   for(j=0;j<n;j++)
     {
      scanf("%lf",px);
      a+=*px/n;
      px++;
     }
   px=x;
   for(j=0;j<n;j++)
     {
      s1+=(*px-a)*(*px-a)/n;
      px++;
     }
   s=sqrt(s1);
   printf("%.5lf\n",s);
  }
 return 0;
}
