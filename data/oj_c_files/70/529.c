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
	int n,i,j;
	float a[100][2];
	double dis,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f %f",&a[i][0],&a[i][1]);
	dis=sqrt((a[0][0]-a[1][0])*(a[0][0]-a[1][0])+(a[0][1]-a[1][1])*(a[0][1]-a[1][1]));
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			d=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			if(d>dis)
				dis=d;
		}
	printf("%.4f\n",dis);
}
