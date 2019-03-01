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
	int k,n[100],i,p;
	double x[100],sum[100],average[100],mm[100],s[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{ 
		sum[i]=0;
		scanf("%d",&n[i]);
		for(p=0;p<n[i];p++)
		{
			scanf("%lf",&x[p]);
			sum[i]+=x[p];
		}
		average[i]=sum[i]/n[i];
		mm[i]=0;
		for(p=0;p<n[i];p++)
		{
			mm[i]+=pow(average[i]-x[p],2);
			s[i]=pow(mm[i]/n[i],0.5);
		}
	}
		for(i=0;i<k;i++)
		{
			printf("%.5f\n",s[i]);
		}
		return 0;
	}


	









