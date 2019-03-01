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

int main (){
int m,n,counta,countb,x,y;
double result;
scanf("%d",&m);
counta=0;
while(counta<m){
	result=0.0;
	countb=0;
	x=2;
	y=1;
	scanf("%d",&n);
		while(countb<n){result+=(1.0*x)/y;
			x=x+y;
			y=x-y;
			countb++;}
	counta+=1;
    printf("%.3lf\n",result);}

return 0;
}