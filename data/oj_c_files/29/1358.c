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
	int m,n,e;
	scanf("%d",&m);
	double*za=(double*)malloc(sizeof(double)*m);
	
	for(int i=0;i<m;i++){
		scanf("%d",&n);
		int a=2,b=1;
		za[i]=0;
		for(int k=0;k<n;k++){
			za[i]+=1.0*a/b;
			e=a;
			a=a+b;
			b=e;
			
		}
	}
	for(int h=0;h<m;h++){
		printf("%.3lf\n",za[h]);
	}
	free(za);
	return 0;
}