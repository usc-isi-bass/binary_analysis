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
	int n1;
	scanf("%d",&n1);
	int i;
	for(i=0;i<n1;i++)
	{
		int n2;
		scanf("%d",&n2);
		double a[100];
		double sum=0;
		double avg;
		int j;
		for(j=0;j<n2;j++)
		{
			scanf("%lf",&a[j]);
			sum=sum+a[j];
		}
		double temp;
		temp=(double)n2;
		avg=sum/temp;
		
		double s,t=0;
		int k;
		for(k=0;k<n2;k++)
		{
			t=t+(a[k]-avg)*(a[k]-avg);
		}
		s=sqrt(t/n2);
		printf("%.5f\n",s);
	}
	return 0;	
}