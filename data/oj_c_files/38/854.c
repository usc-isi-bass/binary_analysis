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

int u[100];
int main()
{
	int n,i,j;
	double b,c=0,d=0,sum=0,num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&u[i]);
		double p[1000];
			for(j=0;j<u[i];j++)
			{
				scanf("%lf",&p[j]);
				sum+=p[j];
			}
				num=sum/u[i];
				for(j=0;j<u[i];j++)
				{
				b=pow(p[j]-num,2);
				c+=b/u[i];
				}
				d=sqrt(c);
			printf("%.5lf\n",d);
			sum=0;
			num=0;
			d=0;
			c=0;
	}
	return 0;
}