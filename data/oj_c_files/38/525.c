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
	int n=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		double s=0,squs=0;
		int a=0,j=0;
		scanf("%d",&a);
		for(j=0;j<a;j++){
			double num=0;
			scanf("%lf",&num);
			s=s+num;
			squs=squs+(num*num);
		}
		double ave=0;
		ave=s/a;
		double ss=0;
		ss=sqrt((squs-(2*ave*s)+(a*ave*ave))/a);
		printf("%.5lf\n",ss);
	}
	return 0;
}
