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
	int k,i,j,n;
	double *p,total,ave,total2,res;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		total=0;ave=0;total2=0;res=0;
		p=(double *)calloc(100,sizeof(double));
		for(j=0;j<n;j++)
		{
			scanf("%lf",p+j);
			total=total+(*(p+j));
		}
		ave=total/n;
		for(j=0;j<n;j++)
		total2=total2+((*(p+j))-ave)*((*(p+j))-ave);
		res=sqrt(total2/n);
		printf("%.5f\n",res);
	}
}