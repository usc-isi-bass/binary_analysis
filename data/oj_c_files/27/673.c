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
	int n;        //????
	cin>>n;       //????
	for (int i=0;i<n;i++){   //???? 
		double a,b,c;    //????
		cin>>a>>b>>c;    //????
		double delta=b*b-4*a*c;//???????
		if (delta>0){          //????
			printf("x1=%.5f;x2=%.5f\n",(-b+sqrt(delta))/(a*2),(-b-sqrt(delta))/(a*2));
		}
		if (delta==0){
			printf("x1=x2=%.5f\n",(-b)/(a*2));
		}
		if (delta<0){
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(-b)/(a*2)+1.0-1.0,sqrt(-delta)/(a*2),(-b)/(a*2)+1.0-1.0,sqrt(-delta)/(a*2));
		}
	}
	return 0;   //???????????????????
}