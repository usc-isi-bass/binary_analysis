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
	int i,j,n;
	double max=0.0;
	float d[10][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
        scanf("%f %f",&d[i][0],&d[i][1]);
	for (i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(((d[i][0]-d[j][0])*(d[i][0]-d[j][0])+(d[i][1]-d[j][1])*(d[i][1]-d[j][1]))>max)
				max=(d[i][0]-d[j][0])*(d[i][0]-d[j][0])+(d[i][1]-d[j][1])*(d[i][1]-d[j][1]);
	max=sqrt(max);
	printf("%.4f",max);
//	for(i=0;i<n;i++)
//	    printf("%f %f\n",d[i][0],d[i][1]);
	return 0;
}
