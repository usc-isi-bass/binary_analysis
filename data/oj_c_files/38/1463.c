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
	int k,n,i,j;
	double *p,*q,f,sum1,sum2,s,m,a[1000];//m?????
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		p=a;
		sum1=0;sum2=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++,p++)
		{
			scanf("%lf",p);
			sum1+=*p;
		}
		m=sum1/n;
		p=a;
		for(q=p;q!=p+n;q++)
		{
			sum2+=(*q-m)*(*q-m);
		}
		s=sqrt(sum2/n);
		printf("%.5f\n",s);
	}
}




