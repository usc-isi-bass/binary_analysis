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
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int w,i,j,sum=13,day;
scanf("%d",&w);
for(j=1;j<=12;j++){
	for(i=0;i<=j-1;i++){
    sum=sum+a[i];
	}
	day=sum%7;
    day=(w+day)%7;
	if(day==6){
		printf("%d\n",j);
	}
	sum=13;
	}
return 0;
}