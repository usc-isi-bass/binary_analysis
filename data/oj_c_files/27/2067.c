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
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		double a, b,c,x1,x2;
		scanf("%lf%lf%lf",&a,&b,&c);
		if ((b*b-4*a*c)==0){
			x1=-(b/(2*a));
			printf("x1=x2=%.5lf\n",x1);
		}
		else{
			if((b*b-4*a*c)>0){
				x1=(-b+sqrt(b*b-4*a*c))/(2*a);
				x2=(-b-sqrt(b*b-4*a*c))/(2*a);
				printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
			}
			else{
				double m,n;
				m=-b/(2*a);
                                    if (b==0){
                                           m=0.00000;
                                    }
				n=sqrt(4*a*c-b*b)/(2*a);
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,n,m,n);
			}
		}
	}
	return 0;
}
