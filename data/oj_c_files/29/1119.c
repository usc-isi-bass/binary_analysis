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
 
       int n,i,j,a[100],k,b=2,c=1;
       double sum[100];
       scanf("%d",&n);
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
  for(i=0;i<n;i++)
	  sum[i]=0;
       for(i=0;i<n;i++)
       {
               b=2;
			  c=1;
			for(j=0;j<a[i];j++)
              {
 
                     sum[i]=sum[i]+(1.0*b/c);
                            k=c;
                            c=b;
                            b=b+k;
              }		 
       }
       for(i=0;i<n-1;i++)
              printf("%.3lf\n",sum[i]);
 printf("%.3lf",sum[n-1]);
		return 0;
}
