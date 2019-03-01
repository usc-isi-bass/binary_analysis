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
double *t[100],*p,a,s;
int k,i,j,n;
scanf("%d",&k);
for(j=0;j<k;j++)
{a=s=0;
	scanf("%d",&n);
	t[j]=(double*)calloc(150,sizeof(double));
    p=t[j];
	for(i=0;i<n;i++)
		scanf("%lf",p+i);
    for(i=0;i<n;i++)
		a=a+*(p+i);
	a=a/n;
	 for(i=0;i<n;i++)
		 s=s+pow(*(p+i)-a,2);
		 s=s/n;
	 s=sqrt(s);
	 printf("%.5f\n",s);
}
}