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
	int i,j,n;double m=0,k=0,x[50],y[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(j>=n)break;
			m=pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2);
			if(m>k)k=m;
		}
	printf("%.4f\n",sqrt(k));
	return 0;
}
