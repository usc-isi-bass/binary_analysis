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

main()
{
	double s,a,b,c,d,alpha;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&alpha);
	s=(a+b+c+d)/2;
	alpha=alpha*3.1415926/180;
	alpha=alpha/2;
	if((s-a)*(s-b)*(s-c)*(s-d)<a*b*c*d*cos(alpha)*cos(alpha)){printf("Invalid input\n");}
	else printf("%.4lf\n",sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(alpha)*cos(alpha))); 
}