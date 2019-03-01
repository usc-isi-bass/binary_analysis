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
	int m,n,i;
	double a[100],s,d,*b;
	
	scanf("%d",&m);
	while(m--)
	{
		b=&a[0];
		s=0;d=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{scanf("%lf",b+i);
		s=s+*(b+i);}
		s=s/n;
		for(i=0;i<n;i++)
		d=d+(*(b+i)-s)*(*(b+i)-s);
		d=d/n;
		d=sqrt(d);
		printf("%.5f\n",d);
		}
}
