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
	int n,k,l,h;
	double a[1000],total=0,average=0,s=0,*p;
	p=a;
	scanf("%d",&n);
	for(h=0;h<n;h++)
	{
		scanf("%d",&l);
		for(k=0;k<l;k++)
		{
			scanf("%lf",(p+k));
			total+=*(p+k);
		}
		average=total/l;
		total=0;
		for(k=0;k<l;k++)
		{
			total+=(*(p+k)-average)*(*(p+k)-average);
		}
		s=sqrt(total/l);
		printf("%.5lf",s);
		printf("\n");
		total=0;
	}
}