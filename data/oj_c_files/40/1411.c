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
	double a,b,c,d,e,S;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
	if((((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d) - a*b*c*d*cos(e/360*PI)*cos(e/360*PI))>=0){
	S=sqrt(((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d) - a*b*c*d*cos(e/360*PI)*cos(e/360*PI));
	printf("%.4f",S);
	}else{
		printf("Invalid input");
	}

	
	return 0;

}
 
