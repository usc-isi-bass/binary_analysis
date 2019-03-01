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
	int w,sum=0,a;
	scanf("%d",&w);
	for(int i=0;i<12;i++){
		if(i==0){
			sum=0;
		}else if(i==1||i==3||i==5||i==7||i==8||i==10){
			sum+=31;
		}else if(i==4||i==6||i==9||i==11){
			sum+=30;
		}else if(i==2){
			sum+=28;
		}
		a=(sum+13-1+w-7)%7;
		if(a==5){
			printf("%d\n",i+1);
		}
	}
	return 0;
}