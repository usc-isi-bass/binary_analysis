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
	int n,i;
	scanf("%d",&n);
	double a,b,c,x1,x2,t,t1,t2;
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf",&a,&b,&c);
		t=b*b-4*a*c;
		if(t>0){
			printf("x1=%.5lf;x2=%.5lf\n",x1=(-b+sqrt(t))/(2*a),x2=(-b-sqrt(t))/(2*a));
		}
		else if(t==0)
			printf("x1=x2=%.5lf\n",x1=-b/(2*a));
		else if(t<0){
			t=fabs(t);
			t1=-b/(2*a);
			t2=sqrt(t)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",t1,t2,t1,t2);
		}
	}
	return 0;
}