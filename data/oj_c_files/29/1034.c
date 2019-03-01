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

double f(int n){
	double a=1,b=2,c;
	int i=1;
	double d=2.000;
	if(n==1)
		return d;
    while(i<n){
		c=a+b;
		a=b;b=c;
		d+=c/a;
		i++;
	}
	return d;
}
int main(){
	int m,i,sz[100];
	double s;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&(sz[i]));
	}
    for(i=0;i<m;i++){
		printf("%.3lf\n",f(sz[i]));
	}
	return 0;
}

