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
   int n,i,a,b;
  double x[10],y[10],totle=0; 
   scanf("%d",&n);
	   for (i=0;i<n;i++){
		   scanf("%lf %lf",&x[i],&y[i]);
	   }
	   for(a=0;a<n;a++){
		   for(b=0;b<n;b++){
			   if ((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b])>totle)
				   totle=((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
		   }
	   }
    printf("%.4f\n",pow(totle,0.5));
	return 0;
}