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

int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	double a[100],b[100],c[100],x1[100],x2[100],y1[100];
    for(i=0;i<n;i++)
	{	
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	}
    for(i=0;i<n;i++)
	{
		if(b[i]*b[i]-4*a[i]*c[i]>0)
		{
			x1[i]=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
		    x2[i]=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
		    printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
		}
		if(b[i]*b[i]-4*a[i]*c[i]==0)
		{
			x1[i]=x2[i]=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			printf("x1=x2=%.5lf\n",x1[i]);
		}
		if(b[i]*b[i]-4*a[i]*c[i]<0)
		{	
			y1[i]=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
            x1[i]=-b[i]/(2*a[i]);
		    x2[i]=-b[i]/(2*a[i]);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1[i],y1[i],x2[i],y1[i]);
		}
	}
	return 0;
}

