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

/*
 * 004.cpp
 *
 *  Created on: 2012-9-28
 *  Author: ???
 *  ??:???????????????
 */

int main(){
	int n;
	double a,b,c,delta,x1,x2,x;
	cin >> n;
	while(n--){
		cin >> a >> b >> c;
		delta=b*b-4*a*c;
		if (delta>=0){                                      //??????
			if (delta>0){
				x1=(-b + sqrt(delta))/(2*a);
				x2=(-b - sqrt(delta))/(2*a);
				if (x1==0) x1=0;                //????"-0"???
				if (x2==0) x2=0;
				printf("x1=%.5f;x2=%.5f\n",x1,x2);  //?printf??????5???
			} else {
				x1=(-b)/(2*a);
				if (x1==0) x1=0;
				printf("x1=x2=%.5f\n", x1);
			}
	    }else {
	    	x1=(-b)/(2*a);              //??
	    	x=sqrt(-delta)/(2*a);       //??
	    	if (x1==0) x1=0;
                  if (x==0) x=0;
	    	printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x,x1,x);
	    }
	}
	return 0;
}