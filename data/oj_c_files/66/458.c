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
	int year,mouth,day,k,sum=0;
	scanf("%d%d%d",&year,&mouth,&day);
	sum=(year-1)%7+year/4-year/100+year/400;
			for(k=1;k<mouth;k++){
				if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
					sum+=3;
					if(k==4||k==6||k==9||k==11)
						sum+=2;}	
				if((year%400==0||(year%4==0&&year%100!=0))&&(mouth<=2)){
					sum--;}
			sum+=day;
			if(sum%7==0){
				printf("Sun.");
			}if(sum%7==1){
				printf("Mon.");
			}if(sum%7==2){
				printf("Tue.");
			}if(sum%7==3){
				printf("Wed.");
			}if(sum%7==4){
				printf("Thu.");
			}if(sum%7==5){
				printf("Fri.");
			}if(sum%7==6){
				printf("Sat.");
}return 0;}		

		