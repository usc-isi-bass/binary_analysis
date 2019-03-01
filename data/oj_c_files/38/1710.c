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
	int k,n,i;
	double *p,a[1000],sum=0,D=0,S,x;
	p=a;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{sum=0;D=0;
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
	{
	scanf("%lf",p);
	sum=sum+*p;
	}
	x=sum/n;
	for(p=a;p<a+n;p++)
	{D=D+pow((*p-x),2);}
	S=sqrt(D/n);
	printf("%.5f\n",S);
	}


	return 0;
}
