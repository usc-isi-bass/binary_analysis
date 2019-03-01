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
		int k,n[100],i,j;
	double x[100][100],a=0,b,c=0,d;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++){
			scanf("%lf",&x[i][j]);
		}
	}
	for(i=0;i<k;i++){
		a=0;
		for(j=0;j<n[i];j++){
			a+=x[i][j];
		}
		b=a/n[i];
		c=0;
		for(j=0;j<n[i];j++){
			c+=((x[i][j]-b)*(x[i][j]-b));
		}
		d=sqrt(c/n[i]);
		printf("%.5lf\n",d);
	}
	return 0;
}