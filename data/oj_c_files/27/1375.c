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
	int n;
	double A[15],B[15],C[15];
	double x1,x2,m,y;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&A[i],&B[i],&C[i]);
	}
	for(i=0;i<n;i++) 
	{   m=B[i]*B[i]-4*A[i]*C[i];
	if(m<0)
	{	y=sqrt(-m)/(2*A[i]);
	if(B[i]==0)
    printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",(B[i])/(2*A[i]),y,(B[i])/(2*A[i]),y);
	else
	printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",(-B[i])/(2*A[i]),y,(-B[i])/(2*A[i]),y);
	}
	else if(m==0)
	{	x1=(-B[i])/(2*A[i]);
	    printf("x1=x2=%.5lf\n",x1);
	}
    else 
	{x1=(-B[i]+sqrt(m))/(2*A[i]);
	x2=(-B[i]-sqrt(m))/(2*A[i]);
	printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	}
	}
	return 0;
}
