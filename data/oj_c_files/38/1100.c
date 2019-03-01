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


void main()
{
	double x[1000],S,a,*p[1000],sum;
	int i,k,n;
	
	scanf("%d",&k);

	for(i=0;i<1000;i++)
	{
		*(p+i)=x+i;
	}

	while(k--)
	{
		scanf("%d",&n);
		sum=0;
			
		for(i=0;i<n;i++)
		{
			scanf("%lf",*(p+i));
			sum+=**(p+i);
		}
		a=sum/n;
		
		S=0;
		for(i=0;i<n;i++)
		{
		S+=(**(p+i)-a)*(**(p+i)-a);
		}
			
		S=sqrt(S/n);
			
		printf("%.5f\n", S);
	}
}