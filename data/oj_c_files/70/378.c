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


void main()
{
	int i,j,num;
	double mid,max=0;
	float point[100][2];

	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		scanf("%f %f",&point[i][0],&point[i][1]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i;j<num;j++)
		{
			mid=(point[i][0]-point[j][0])*(point[i][0]-point[j][0])
				+(point[i][1]-point[j][1])*(point[i][1]-point[j][1]);
			if(mid>max)
			{
				max=mid;
			}
		}
	}
	printf("%.4lf\n",sqrt(fabs(max)));
}