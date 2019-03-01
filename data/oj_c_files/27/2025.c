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
	int n, i;
	scanf("%d", &n);
	double a, b, c, x1, x2, p;
	for(i=1;i<=n;i++){
		scanf("%lf %lf %lf", &a, &b, &c);
		p=b*b-4*a*c;
		if(p>0){
			x1=(-b+sqrt(p))/(2*a);
            x2=(-b-sqrt(p))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
		}
		else if(p==0){
			printf("x1=x2=%.5lf\n", -b/(2*a));
		}
		else{
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", -b/(2*a), sqrt(-p)/(2*a), -b/(2*a), sqrt(-p)/(2*a));
		}
	}
}

