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
   int k,n,i,j,t;
 double x[100],S,sum2,sum1,aver1,aver2;
   scanf("%d",&k);
   for(i=0;i<k;i++){
	 sum1=0.0,aver1=0.0;
	   scanf("%d",&n);
	   for(j=0;j<n;j++){
		   scanf("%lf",&x[j]);
		   sum1+=x[j];}
	   aver1=(double)sum1/n;
	   sum2=0.0,aver2=0.0;
	   for(t=0;t<n;t++){
		   
		   sum2+=(x[t]-aver1)*(x[t]-aver1);

   }
	   aver2=(double)sum2/n;
   S=(double)sqrt(aver2);
printf("%.5f\n",S);
}
return 0;
}

