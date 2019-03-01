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
	int n,i,j,temp,k,b[100];
	double a[100][1000],sum=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		
		for(j=0;j<b[i];j++)
		{
			scanf("%lf",&a[i][j]);
			sum+=a[i][j];
		}
		sum=sum/b[i];
		for(j=0;j<b[i];j++)
		{
			s+=(a[i][j]-sum)*(a[i][j]-sum);
		}
		s/=b[i];
		s=sqrt(s);
		printf("%.5lf\n",s);
		s=0;
		sum=0;
	}
	
	
	
	
	
	
				
				
	return 0;
}

