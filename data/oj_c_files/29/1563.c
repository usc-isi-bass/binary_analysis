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
	double a;
	cin>>a;
	while (a>0)
	{
		double b,c,d,f,g;
		cin>>f;
		b=1;
		c=2;
		d=0;//????
		for (g=1;g<=f;g++)
		{
			d=d+c/b;
			double e;
			e=b;
			b=c;
			c=e+c;

		}
        printf("%.3f\n",d);

		a=a-1;
	}


	


	return 0;
}
