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
    double temp=0,sum=0;
	double pt[256][2]={0};
	int n=0,i=0,j=0,k=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf %lf",&pt[i][0],&pt[i][1]);
	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			temp=(pt[j][0]-pt[k][0])*(pt[j][0]-pt[k][0])+(pt[j][1]-pt[k][1])*(pt[j][1]-pt[k][1]);
			if (sum<=temp) sum=temp;
		}
	}
    sum=pow(sum,0.5);
	printf("%.4lf",sum);
	return 0;
}