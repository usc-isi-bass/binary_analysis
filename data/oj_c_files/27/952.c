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
	cin>>n;
	i=0;
	double a[100],b[100],c[100],x1,x2,xubu;
	while (i<n)
	{
		cin>>a[i]>>b[i]>>c[i];
		i++;
	}
	i=0;
	while(i<n)
	{
		if(b[i]*b[i]-4*a[i]*c[i]>0)
		{
			x1=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			x2=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			if(x1==-0) x1=0;
			if(x2==-0) x2=0;
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
			i++;
		}
		else if (b[i]*b[i]-4*a[i]*c[i]==0)
		{
			x1=x2=(-b[i])/(2*a[i]);
			if(x1==-0) x1=x2=0;
			printf("x1=x2=%.5f\n",x1,x2);
			i++;
		}
		else
		{
			xubu=sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
			x1=x2=(-b[i])/(2*a[i]);
			if(x1==-0) x1=x2=0;
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,xubu,x2,xubu);
			i++;
		}
	}
	return 0;
}