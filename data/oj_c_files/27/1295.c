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
	int n,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	float a,b,c,d;
       double disc,x1,x2,realpart,imagpart;
	scanf ("%f%f%f",&a,&b,&c);
	disc=b*b-4*a*c;
	if(fabs(disc)==0)
		printf("x1=x2=%.5f\n",-b/(2*a));
	else if (disc>0)
	{x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
	printf ("x1=%.5f;x2=%.5f\n",x1,x2);
	}
	else
	{realpart=-b/(2*a);
	imagpart=sqrt(-disc)/(2*a);
	printf("x1=%.5f+%.5fi;",realpart,imagpart);
	printf("x2=%.5f-%.5fi\n",realpart,imagpart);
	}
	}
	return 0;
}

