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
	int i;
	double a[5],s,S,e;
	for(i=0;i<5;i++){
		scanf("%lf",&a[i]);}
	s=(a[1]+a[2]+a[3]+a[0])/2;
	e=((s-a[1])*(s-a[2])*(s-a[3])*(s-a[0])-a[1]*a[2]*a[3]*a[0]*cos(a[4]/2*3.1415926/180)*cos(a[4]/2*3.1415926/180));
	if(e<0){
		printf("Invalid input");}
	else{
		S=sqrt(e);
		printf("%.4lf",S);}
	return 0;
}

    
