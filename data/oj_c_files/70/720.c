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
	int n,i,j,k=0;
	float x[100]={0},y[100]={0},sum[100]={0},max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f %f",&x[i],&y[i]);
	for(j=0;j<n;j++)
		for(i=0;i<n&&i!=j;i++)
		{
			sum[k]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
			if(sum[k]>max)
				max=sum[k];
			k++;
		}
		printf("%.4f",sqrt(max));
		return 0;
}