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
  double a[100],sum=0,ave,m,w,g,s;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {  sum=0;
     scanf("%d\n",&k);
      for(j=0;j<k;j++)
       {
         scanf("%lf",&a[j]);
         sum+=a[j];
        }
       ave=sum/k;
        w=0;
     for(j=0;j<k;j++)
      {
        m=pow((a[j]-ave),2);
        w+=m;
	 }
	  g=w/k;
      s=sqrt(g);
      printf("%.5lf\n",s);
       
    }
    return 0;
}