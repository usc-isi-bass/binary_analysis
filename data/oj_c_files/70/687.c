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
	double a[100][2],p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%lf",&a[i][j]);
	p=pow((a[0][0]-a[1][0]),2)+pow((a[0][1]-a[1][1]),2);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(p>pow((a[i][0]-a[j][0]),2)+pow((a[i][1]-a[j][1]),2))
				p=p;
			else
				p=pow((a[i][0]-a[j][0]),2)+pow((a[i][1]-a[j][1]),2);
		
	printf("%.4f\n",sqrt(p));
}