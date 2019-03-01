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
	int i,j,k=0,n=0;
	double a[1000],x[1000],m=0;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		x[i]=0;
		m=0;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&a[j]);}
		for(j=0;j<n;j++){
			m=m+a[j];}
		for(j=0;j<n;j++){
			x[i]=(double)(a[j]-m/(float)n)*(a[j]-m/(float)n)+x[i];}
	printf("%0.5lf\n",sqrt(x[i]/(float)n));}
    
	return 0;
}
