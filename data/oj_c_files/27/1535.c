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
scanf("%d",&n);
for(i=0;i<n;i++)
{
	 double a,b,c;
	 scanf("%lf%lf%lf",&a,&b,&c);
	 if(b*b>4*a*c)
		 printf("x1=%.5lf;x2=%.5lf\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
	 else if(b*b==4*a*c)
		 printf("x1=x2=%.5lf\n",(-b+sqrt(b*b-4*a*c))/(2*a));
	 else
	 {
		 if(b==0)
            printf("x1=0.00000+%.5lfi;x2=0.00000%.5lfi\n",sqrt(-b*b+4*a*c)/(2*a),-sqrt(-b*b+4*a*c)/(2*a));
		else
		 printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",-b/(2*a),sqrt(-b*b+4*a*c)/(2*a),-b/(2*a),-sqrt(-b*b+4*a*c)/(2*a));
	 }
}
return 0;
}
