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
	int m,i,j;
	double a=2.000,b=1.000;
	int c[100];
	double s[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&c[i]);
	}
	for(i=0;i<m;i++){
		s[i]=0;
	}
	for(i=0;i<m;i++){
		for(j=0;j<c[i];j++){
			s[i]+=1.0*a/b;
			a=a+b;
			b=a-b;
		}
		printf("%.3lf\n",s[i]);
		a=2.000;
		b=1.000;
	}
	return 0;
}