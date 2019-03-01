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
{struct point
{
	double x,y;
}point[10];
int n,i,j,m;
double d[10][10];
double max=0.0,dis;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	scanf("%lf%lf",&point[i].x,&point[i].y);
}
for(j=0;j<n;j++)
{
	for(m=j+1;m<n;m++)
	{
	d[m][j]=(point[m].x-point[j].x)*(point[m].x-point[j].x)+(point[m].y-point[j].y)*(point[m].y-point[j].y);
		if(d[m][j]>max)
			max=d[m][j];
	}
}
	printf("%.4f",sqrt(max));
	return 0;
}

