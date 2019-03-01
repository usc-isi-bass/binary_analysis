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
	int n;
	scanf("%d",&n);
	int i,j,k;
    double sum,ave,fc;
	double sz[1000];
	for (i=0;i<n;i++)
	{
        scanf("%d",&j);
		sum=0;
		fc=0;
		for (k=0;k<j;k++)
		{
		scanf("%lf",&sz[k]);
		sum=sum+sz[k];
		}
        ave=(double)sum/j;
		for (k=0;k<j;k++)
		{
			fc=fc+pow(sz[k]-ave,2);
		}
		fc=(double)fc/j;
		fc=sqrt(fc);
		printf("%.5lf\n",fc);
		


	}
	
	
	return 0;
}