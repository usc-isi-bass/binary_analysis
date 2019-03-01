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

int main ()
{
	int m,c[100],i,j;
	float sum,chu;
	float a[100]={1,2};
	float b[100]={2,3};
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		scanf("%d",&c[i]);
		sum=0;
		for (j=0;j<c[i];j++)
		{
			if (j>1)
			{
			    a[j]=a[j-2]+a[j-1];
			    b[j]=b[j-2]+b[j-1];
			}
			chu=b[j]/a[j];
			sum=sum+chu;
		}
		printf("%.3f\n",sum);
	}
	return 0;
}