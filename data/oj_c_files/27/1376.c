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
	double a,b,c;
	double s,t,m,k,u;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{scanf("%lf%lf%lf",&a,&b,&c);
	 if(b*b-4*a*c>0)

	 {s=-(b/(2*a))+sqrt(b*b-4*a*c)/(2*a);
	t=-(b/(2*a))-sqrt(b*b-4*a*c)/(2*a);
	printf("x1=%.5lf;x2=%.5lf\n",s,t);
	 }

	else if(b*b-4*a*c==0)
	{
		k=(-b)/(2*a);
	printf("x1=x2=%.5lf\n",k);
	}
	else 
	{m=-b/(2*a);

	u=sqrt(-(b*b-4*a*c))/(2*a);
	printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,u,m,u);}
	}








	return 0;
}
