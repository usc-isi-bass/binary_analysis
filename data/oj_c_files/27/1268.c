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
	int n,d=1;
    double a,b,c,x1,x2,y,p,q;
	scanf("%d",&n);
	for(d=1;d<=n;d++){
		scanf("%lf %lf %lf",&a,&b,&c);
		y=b*b-4*a*c;
		if(y>0){
			x1 = (-b + sqrt(y))/(2*a);
			x2 = (-b - sqrt(y))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if(y==0){
			x1=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		else{
			p=-b/(2*a);
			q=sqrt(-y)/(2*a);
			if(b==0){
				p=-p;
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
			}
			if(b!=0){
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
			}
		}
	}
	return 0;
}
			

			
