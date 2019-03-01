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

int main(int argc, char* argv[])
{
	int i,j,n,k;
	scanf("%d",&n);
	double a[100][2],b[100][100],max;
	for (i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%lf",&a[i][j]);
		}

	}
	for(i=0;i<n;i++)
	{
		for(k=i;k<n-1;k++)
		{
			b[i][k]=sqrt(pow(a[i][0]-a[1+k][0],2)+pow(a[i][1]-a[1+k][1],2));
		}
	}
	max=b[0][0];
	for(i=0;i<n;i++)
	{
		for(k=i;k<n-1;k++)
		{
			if (b[i][k]>max)
			max=b[i][k];
		}
	}
	printf("%.4lf\n",max);


	return 0;
}

