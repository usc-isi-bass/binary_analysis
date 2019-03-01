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
	int a[NUM][COL];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	double rate;
	rate=(double)a[0][1]/a[0][0];
	for(i=1;i<n;i++)
	{
		if((double)a[i][1]/a[i][0]-rate>0.05)
		{
			printf("better\n");
		}
		else if((double)a[i][1]/a[i][0]-rate<-0.05)
		{
			printf("worse\n");
		}
		else if((double)a[i][1]/a[i][0]-rate<=0.05&&(double)a[i][1]/a[i][0]-rate>=-0.05)
		{
			printf("same\n");
		}
	}
     return 0;

}