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
	int i,n,n1,j;
	double s=0,sum=0,av;
	double fc[100];
	scanf("%d",&n);
	double x[100];
	for(i=0;i<n;i++){
		sum=0;
		s=0;
		scanf("%d",&n1);
		for(j=0;j<n1;j++){
			scanf("%lf",&x[j]);
			sum+=x[j];
		}
		av=sum/n1;
		for(j=0;j<n1;j++){
			s+=(x[j]-av)*(x[j]-av);
		}
		fc[i]=sqrt(1.0*s/n1);
	}
	for(i=0;i<n;i++){
		printf("%.5lf\n",fc[i]);
	}
	return 0;
}
