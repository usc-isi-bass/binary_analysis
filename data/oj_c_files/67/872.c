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
	int n,i;
	double jiwei1,jiwei2,jiweiyx;
	double a[100],b[100],c[100];
	scanf("%d",&n);

    scanf("%lf %lf",&jiwei1,&jiwei2);
	jiweiyx=(jiwei2/jiwei1)*100;

	for(i=0;i<n-1;i++)
	{
		scanf("%lf %lf",&a[i],&b[i]);
		c[i]=(b[i]/a[i])*100;
		if(c[i]-jiweiyx>=5)
		{
			printf("better\n");
		}
		if(jiweiyx-c[i]>=5)
		{
			printf("worse\n");
		}
		if(jiweiyx-c[i]<=5&&c[i]-jiweiyx<=5) printf("same\n");
	}

	return 0;
}
