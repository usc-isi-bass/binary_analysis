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
	int n,i;
	double a,b,c,x1,x2,d,e;
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%lf %lf %lf",&a,&b,&c);
        d=b*b-4*a*c;
		if(d>0){
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if(d==0){
			x1=-b/2/a;
if(x1==-0)  x1 = 0;
			printf("x1=x2=%.5lf\n",x1);
		}
		else if(d<0){
			x1=-b/2/a;
                           if(x1==-0)  x1 = 0;
			e=sqrt(-d)/2/a;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,e,x1,e);
		}
	}
	return 0;
}


