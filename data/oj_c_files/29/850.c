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
	int n,a[100],i=0,k=1,M=1,m=2;
		double sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=1;k<a[i]+1;k++)
		{	
			if(k==1)
			{
			sum+=(double)m/M;
			}
			else
			{
				int o=m;
				m=M+m;
				M=o;
			sum+=(double)m/M;
			}
	}
				printf("%.3lf\n",sum);
				m=2;
				M=1;
				sum=0;
	}
   return 0;
}
