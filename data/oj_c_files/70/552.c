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
	int n,i,j,k;
	double a[100][2],m,max=0,MAX=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(k=i+1;k<n;k++)
		{
			m=sqrt((a[i][0]-a[k][0])*(a[i][0]-a[k][0])+(a[i][1]-a[k][1])*(a[i][1]-a[k][1]));
	        if(m>max)
				max=m;
		}
	}
	printf("%.4lf\n",max);
	return 0;
}
