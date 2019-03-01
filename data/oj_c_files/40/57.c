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
	float a,b,c,d,k,s;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&k);
	s=1.000/2.000*(a+b+c+d); 

	if ((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(k/360.0*3.1415926)*cos(k/360.0*3.1415926)<0)
	{
	printf("Invalid input");
	}
	else 
	{
		printf("%.4f",sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(k/360.0*3.1415926)*cos(k/360.0*3.1415926)));
	}


	return 0;
}
