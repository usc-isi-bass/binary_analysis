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
	int n;
	float a,b,c;
	scanf("%d",&n);
	while(n--){
		scanf("%f %f %f",&a,&b,&c);
		if((b*b-4*a*c)==0)
			printf("x1=x2=%.5f\n",-b/(2*a));
		if((b*b-4*a*c)>0)
			printf("x1=%.5f;x2=%.5f\n",(-b+sqrt((b*b-4*a*c)))/(2*a),(-b-sqrt((b*b-4*a*c)))/(2*a));
		if((b*b-4*a*c)<0)
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),(sqrt((-b*b+4*a*c))/(2*a)),-b/(2*a),(sqrt((-b*b+4*a*c))/(2*a)));
		
	}
	return 0;
}