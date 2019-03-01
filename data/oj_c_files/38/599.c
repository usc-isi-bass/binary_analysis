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

int main(){
	int i,j,k,n;
	double a[100][100];
	double	c=0,b=0;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		c=0;b=0;
		for(j=0;j<n;j++){
			scanf("%lf ",&a[i][j]);
			c+=a[i][j];}
		for(j=0;j<n;j++)
			b+=(a[i][j]-c/n)*(a[i][j]-c/n);
		printf("%.5lf\n",sqrt(b/n));
}}

		
