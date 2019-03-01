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
	int i,j,n,m;
	double a[101],ave,r;
	scanf("%d",&m);
	for(j=0;j<m;j++){
	scanf("%d",&n);
	double sum=0;
	for(i=0;i<n;i++) {
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	sum=0;
	double *p;
	p=a;
	for(i=0;i<n;i++){
		sum+=(p[i]-ave)*(p[i]-ave);
	}
	r=(double)sqrt(sum/n);
	printf("%.5lf\n",r);
	}
}