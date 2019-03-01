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
	double c,d,e,f,g,h,i,s;
	scanf("%lf%lf%lf%lf%lf",&c,&d,&e,&f,&g);
	i = (g/360)*PI;
	s = (c+d+e+f)/2.0;
	h = (s-f)*(s-e)*(s-c)*(s-d) - e*f*c*d*(cos(i))*(cos(i)); //?????????
	
	if(h<0){
		printf("Invalid input\n");
	}
	else{
	double a, x2, x1;
	a = h;
	x1 = 1;
	x2 = (x1+a/x1)/2.0;
	while(x2-x1 > JINGDU || x1-x2 > JINGDU){
		x1 = x2;
		x2 = (x1+a/x1)/2.0;
		} 
	printf("%.4f\n",x2);
	}
	return 0;
}

