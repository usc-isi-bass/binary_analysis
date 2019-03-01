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
	double a,b,c,d,h,S,s,sum;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&h);
	s=(a+b+c+d)/2;
	sum=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(h*PI/360),2);
	S=sqrt(sum); 
	if (h>360||h<=0)
	{
		printf("Error!");
	}
	else
	{
		if (sum<0)
		{
			printf("%s\n","Invalid input");
		}
		else
			printf("%.4lf\n",S);
	}

	return 0;
}