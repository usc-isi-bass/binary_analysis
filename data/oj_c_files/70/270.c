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
	int n,i,k;
	double point[100][2], s,max=0;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf", &point[i][0], &point[i][1]);
	}
	for (i=0;i<n-1;i++)
	{
		for (k=i+1;k<n;k++)
		{
			s=sqrt(pow(point[i][0]-point[k][0],2)+pow(point[i][1]-point[k][1],2));
			if (s>max)
				max=s;
		}
	}
	printf("%.4f\n",max);
	scanf("%d",i);
	return 0;

}