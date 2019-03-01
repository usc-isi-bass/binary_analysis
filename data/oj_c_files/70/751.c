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
	int i,j,k;
	int n;
	double dot[100][2];
	double distf=0;
	double ld=0;
	double dist=0;
	double x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%lf",&dot[i][j]);
		for(i=0;i<n-1;i++)
			for(k=i+1;k<n;k++)
			{
				x=dot[i][0]-dot[k][0];
				y=dot[i][1]-dot[k][1];
				distf=x*x+y*y;
				dist=sqrt(distf);
				if(dist>ld)
				ld=dist;
			}
		printf("%.4f\n",ld);
}
 
 
 
