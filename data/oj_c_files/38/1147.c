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
	 int i,k;
	 scanf("%d",&k);
	 for(i=0;i<k;i++)
	 {
		 int n;
		 scanf("%d",&n);
		 double *p,*p1;
		 double a,s,sum;
		 p=(double*)calloc(n,sizeof(double));
		 for(p1=p;p1<(p+n);p1++)
		 {
			 scanf("%lf",p1);
		 }
		 for(sum=0,p1=p;p1<(p+n);p1++)
		 {
			 sum=sum+(*p1);
		 }
		 a=sum/n;
		 for(s=0,p1=p;p1<(p+n);p1++)
		 {
			 s=s+((*p1)-a)*((*p1)-a);
		 }
		 s=sqrt(s/n);  
		 printf("%.5f\n",s);
	 }

	 
}
