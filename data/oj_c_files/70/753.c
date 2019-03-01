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


struct point
{
	double x, y;
}points[200];
int n;

double getMaxDis(int i);
int main()
{
	scanf("%d", &n);
	int i;
	for(i=0; i<n; i++)
		scanf("%lf %lf", &points[i].x, &points[i].y);

	double MaxDis=0, t;
	for(i=0; i<n; i++)
	{
		t = getMaxDis(i);
		if(t > MaxDis)
			MaxDis = t;
	}
	printf("%.4lf", sqrt(MaxDis));
}

double getMaxDis(int i)
{
	int j;
	double MaxDis = 0, dx, dy;
	for(j=0; j<n; j++)
	{
		dx = (points[i].x - points[j].x)*(points[i].x - points[j].x);
		dy = (points[i].y - points[j].y)*(points[i].y - points[j].y);
		if(dx + dy > MaxDis)
		{
			MaxDis = dx + dy;
		}
	}
	return MaxDis;
}