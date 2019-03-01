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
	int m,n,i,j;
	double ave,num[100][1000],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		ave=0;sum=0;
		for(j=0;j<m;j++)
		{
			scanf("%lf",&num[i][j]);
			sum=sum+num[i][j];
		}
		ave=(double)sum/m;
		sum=0;
		for(j=0;j<m;j++)
		{
			num[i][j]=num[i][j]-ave;
			num[i][j]=num[i][j]*num[i][j];
			sum=sum+num[i][j];
		}
		ave=(double)sum/m;
		ave=(double)sqrt(ave);
		printf("%.5lf\n",ave);
	}
}



