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
	int w,i,sum=13;
	scanf("%d",&w);
	if((13+w-1)%7==5){
		printf("1\n");
	}
	for (i=2;i<=12;i++){
	   if(i-1==1||i-1==3||i-1==5||i-1==7||i-1==8||i-1==10){
			sum+=31;
	   }else if(i-1==2){
			sum+=28;
            }else{
			sum+=30;
	   }
	   if((sum+w-1)%7==5){
		printf("%d\n",i);
	   }
	}
	return 0;
}
