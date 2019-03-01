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
	int i;
	double a,b,c,d,e,f,s,S,p,sz[5];
	for(i=0;i<5;i++){
		scanf("%lf",&sz[i]);
	}
	a=sz[0];
	b=sz[1];
	c=sz[2];
	d=sz[3];
	e=sz[4];
	f=(e/360)*PI;
	s=(a+b+c+d)/2;
	p=((s-a)*(s-b)*(s-c)*(s-d))-(a*b*c*d*cos(f)*cos(f));
	if(p<0){
		printf("Invalid input");
	}
	else{
			S=sqrt(p);
		printf("%.4lf",S);
	}
	return 0;
}