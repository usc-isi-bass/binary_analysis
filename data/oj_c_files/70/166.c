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


int main(int argc, char* argv[])
{
	int num,i,a,b,na=1;
	 double x[50],y[50],z[400];
	 double dis=0;
	
	scanf("%d",&num);
    for (i=1;i<=num;i++) { 
      scanf("%lf",&x[i]);
      scanf("%lf",&y[i]);
	}

	for (a=1;a<=num;a++){
		for(b=a+1;b<=num;b++){
	      z[na]=(x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]);
		  if (z[na]>dis) {
			  dis=z[na];}
		  na++;		  
		}
	}	
	printf("%.4lf\n",sqrt(dis));
	return 0;
}
