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
	int x,y,z;
	double sum=0,sum1=0;
	double a[1000],b,c,d;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{  sum=0;sum1=0;
		int m;
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{  
		scanf("%lf",&a[j]);
		sum+=a[j];
	}
b=sum/m;
	for(j=0;j<m;j++)
	{  
		c=pow(a[j]-b,2);

		sum1+=c;
	}
	d=pow(sum1/m,0.5);
	printf("%.5lf\n",d);
	}
return 0;
}