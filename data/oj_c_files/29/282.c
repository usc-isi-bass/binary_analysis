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

int f(int n){
	if(n==1||n==2)
		return 1;
	else 
		return f(n-1)+f(n-2);
}

int main(){
	int m,i;
	double s=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		int a,d;
		scanf("%d",&a);
		for(d=0;d<a;d++){
			s=s+((double)f(d+3))/((double)f(d+2));
		}
		printf("%.3lf\n",s);
		s=0;
	}
	return 0;
}