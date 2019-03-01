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
	int m,n,i,j;
	int d[100];
	int c[100];
	float sum;
	scanf("%d",&m);
	for (i=0;i<m;i++){
		scanf("%d",&n);
		d[0]=2;
		c[0]=1;
		sum=(float)d[0]/c[0];
		for (j=1;j<n;j++){
			d[j]=d[j-1]+c[j-1];
			c[j]=d[j-1];
			sum+=(float)d[j]/c[j];
		}
		printf("%.3f\n",sum);
	}
	return 0;
}