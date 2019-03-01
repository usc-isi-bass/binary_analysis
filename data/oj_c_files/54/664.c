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
	double final(int n,int k,int n1,int p);
	int n,k,n1,i;
	double m;
	scanf("%d %d",&n,&k);
	n1=n;
	for(i=1;;i++)
	{
		m=final(n+1,k,n1,(n1-1)*i);
		if(m-(int)m==0) break;
	}
	printf("%.0f\n",m);
}

double final(int n,int k,int n1,int p)
{
	double x;
	if(n==1) x=p;
	else x=final(n-1,k,n1,p)*n1/(n1-1)+k;
	return x;
}