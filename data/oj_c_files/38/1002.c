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
   int k,n,i,j;
   double sum1,sum2,r[100],a[100];
   scanf("%d",&k);
   for(i=0;i<k;i++){
       scanf("%d",&n);
	   sum1=0;
	   for(j=0;j<n;j++){
	       scanf("%lf",&a[j]);
		   sum1+=a[j];
	   }
       sum1=sum1/n;
	   sum2=0;
	   for(j=0;j<n;j++){
	       sum2+=(a[j]-sum1)*(a[j]-sum1);
	   }
	   r[i]=sqrt(sum2/n);
   }
   for(i=0;i<k;i++){
      printf("%.5f\n",r[i]);
   }
return 0;
}
