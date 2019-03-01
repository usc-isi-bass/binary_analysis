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
	double *p,x,sum,s;
	    /*?????????????????????????*/
    int N,k,n,i ;
	scanf("%d",&N);
	for (k=0;k<N;k++)
	{
		scanf("%d",&n);
		sum=0;
		p=(double *)malloc(sizeof (double ));/*????*/
		for (i=0;i<n;i++)
	 
		scanf("%lf",&*(p+i));
		for (i=0;i<n;i++)
			sum=sum+*(p+i);
		x=sum/n;/*?????*/
        sum=0;
		for (i=0;i<n;i++)
			sum=sum+(*(p+i)-x)*(*(p+i)-x);/*?????*/
		x=sum/n;
		s=sqrt(x);/*????*/
        printf("%.5lf\n", s);
	}
}

