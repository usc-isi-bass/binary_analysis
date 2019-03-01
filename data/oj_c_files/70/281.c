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
	int i,j,n;
	float a[20][2];
	double dis[20][20],max;

	scanf("%d",&n);

	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
		  scanf("%f",&a[i][j]);

		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				dis[i][j]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));

     
	 max=dis[0][0];
	 
	 for(i=0;i<n;i++)
		 for(j=0;j<n;j++)
			 if(dis[i][j]>=max)
				 max=dis[i][j];

			 printf("%.4lf\n",max);
}