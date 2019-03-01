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
double n,x[4];
int i;
double a=0,b=0,c=0,d=0;
int m;
scanf("%lf",&n);
for(i=0;i<n;i++){
	scanf("%d ",&m);
	if(m>60){
		d=d+1;
	}else if(m<19){
		a=a+1;
	}else if(m>=19&&m<=35){
		b=b+1;
	}else if(m<=60&&m>=36){
		c=c+1;
	}
}
x[0]=100*(a/n);
x[1]=100*(b/n);
x[2]=100*(c/n);
x[3]=100*(d/n);
printf("1-18: %.2lf%%\n",x[0]);
printf("19-35: %.2lf%%\n",x[1]);
printf("36-60: %.2lf%%\n",x[2]);
printf("60??: %.2lf%%\n",x[3]);
return 0;
}