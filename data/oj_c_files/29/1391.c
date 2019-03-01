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

double fei(int n);
int main(){
	int i,m,n;
	double result=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		result=fei(n);
		printf("%.3lf\n",result);
	}
	return 0;
}
double fei(int n){
	double result=0;
	int a=1,b=1,k;
	for(k=1;k<=n;k++){
		int d=a;
		a+=b;
		b=d;
		result+=1.0*a/b;
	}
	return result;
}