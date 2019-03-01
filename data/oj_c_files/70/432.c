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
     int n,i,k;
     scanf("%d",&n);
     double l=0,lest=0;
     double *x;
     x=(double*)malloc(sizeof(double)*n);
     double *y;
     y=(double*)malloc(sizeof(double)*n);
     for(i=0;i<n;i++)
	 {
         scanf("%lf%lf",&x[i],&y[i]);
	 }
	 for(i=0;i<n;i++)
	 {
		 for(k=i+1;k<n;k++)
		 {
			 l=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k]));
			 if(lest<l)
			 {
				 lest=l;
			 }
		 }
	 }
     printf("%.4lf\n",lest);
     free(x);
     free(y);
     return 0;
}
