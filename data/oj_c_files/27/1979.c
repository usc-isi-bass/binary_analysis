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
	double a[100],b[100],c[100],x1,x2,p,q;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(b[i]*b[i]-4*a[i]*c[i]>0)
		{
			x1=(-b[i] + sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]) ;
			x2=(-b[i] - sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]) ;
			printf("x1=%.5lf;x2=%.5lf\n", x1,x2);
		}
		if(b[i]*b[i]-4*a[i]*c[i]==0)
		{
			x1=(-b[i])/(2*a[i]) ;
			printf("x1=x2=%.5lf\n",x1);
		}
		if(b[i]*b[i]-4*a[i]*c[i]<0)
		{
			p=(-b[i])/(2*a[i]) ;
			q=sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
			if(p==0)
			{
			printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",q,q);			
			}
			else
			{
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
			}
		}
	}
	return 0;
}




