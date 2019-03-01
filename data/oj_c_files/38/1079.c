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
	int k,i;
	double s[100];
	scanf("%d",&k);
	for(i=0;i<k;i++){
	int m,j;
	scanf("%d",&m);
	double a[100],b=0,c,d[100],e=0,f;
	for(j=0;j<m;j++){
		scanf("%lf",&a[j]);
		b=b+a[j];}
	c=(double)b/m;
	for(j=0;j<m;j++){
		d[j]=(double)(a[j]-c)*(a[j]-c);
		e=e+d[j];
	}
	f=(double)e/m;
	s[i]=sqrt(f);}
	for(i=0;i<k;i++)
		printf("%.5lf\n",s[i]);
	return 0;
}