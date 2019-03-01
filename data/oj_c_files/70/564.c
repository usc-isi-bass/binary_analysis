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


double point[2][100];
double distance(int i,int j);
void main ()
{
	int n,i,j;
	double dis=0;

	scanf("%d",&n);
	scanf("%lf %lf",&point[0][0],&point[1][0]);
	
	for(i=1;i<n;i++)
	{
		scanf("%lf %lf",&point[0][i],&point[1][i]);

		for(j=0;j<i;j++)
			if(dis<distance(i,j)) dis=distance(i,j);
	}
	printf("%.4lf\n",dis);
}

double distance(int i,int j)
{
	double x=point[0][i]-point[0][j];
	double y=point[1][i]-point[1][j];
	return sqrt(x*x+y*y);
}