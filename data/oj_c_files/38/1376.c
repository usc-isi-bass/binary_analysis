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
{
	int k;
	scanf("%d",&k);
	int i;
    for(i=0;i<k;i++)
	{
		double x[1000];
		int n;
		scanf("%d",&n);
		int j;
		double sum=0;
		for(j=0;j<n;j++)
		{
            scanf("%lf",&x[j]);
			sum+=x[j];
		}
		double a=sum/n;
		double sum2=0;
        for(j=0;j<n;j++)
		{
            sum2+=(x[j]-a)*(x[j]-a);
		}
		double S=sqrt(sum2/n);
		printf("%.5lf\n", S);
	}


	return 0;
}

