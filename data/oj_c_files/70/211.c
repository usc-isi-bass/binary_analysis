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

int main(){
	int k,n,i;
double a,b;
	scanf("%d",&n);
	struct point{
		double x;
		double y;};
	struct point d[max];
	for (i=0;i<n;i++)
scanf("%lf %lf",&d[i].x,&d[i].y);
	a=0;
		for(i=1;i<n;i++)
	{for(k=0;k<i;k++)
		{b=sqrt((d[i].x-d[k].x)*(d[i].x-d[k].x)+(d[i].y-d[k].y)*(d[i].y-d[k].y));
	
	
if(b>a)
a=b;}

	}a=(float)(a);
		printf("%.4f",a);
return 0;
}
