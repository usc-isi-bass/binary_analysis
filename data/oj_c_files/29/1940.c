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
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	    {
		int n;
		scanf("%d",&n);
		float *a=(float *)malloc((n+i)*sizeof(float));
		float *b=(float *)malloc((n+i)*sizeof(float));
		a[0]=1.0;
		a[1]=2.0;
		b[0]=2.0;
		b[1]=3.0;
		for(int j=2;j<n;j++)
		    {
			a[j]=a[j-1]+a[j-2];
			b[j]=b[j-1]+b[j-2];	
			}	
		float sum=0;
		for(int j=0;j<n;j++)
		    sum+=b[j]/a[j];
		printf("%.3f\n",sum);
		}
} 