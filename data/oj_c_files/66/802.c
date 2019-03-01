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
    int year,month,day;
    int i,s,sum=0;
    scanf("%d %d %d",&year,&month,&day);
    s=(year-1)%400+1;
    for(i=1;i<s;i++){
        if(i%4!=0||(i%100==0&&i%400!=0)){
            sum++;
        }
        else if((i%4==0&&i%100!=0)||i%400==0){
            sum+=2;
        }
    }
    for(i=1;i<month;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10){
            sum+=3;
        }
        else if(i==4||i==6||i==9||i==11){
            sum+=2;
        }
        else if(i==2&&(year%4!=0||(year%100==0&&year%400!=0))){
            sum+=0;
        }
        else if(i==2&&(year%4==0&&year%100!=0)||year%400==0){
            sum+=1;
        }
    }
    sum += day;
	if(sum%7==1){
		printf("Mon.\n");
	}
	if(sum%7==2){
		printf("Tue.\n");
	}
	if(sum%7==3){
		printf("Wed.\n");
	}
	if(sum%7==4){
		printf("Thu.\n");
	}
	if(sum%7==5){
		printf("Fri.\n");
	}
	if(sum%7==6){
		printf("Sat.\n");
	}
	if(sum%7==0){
		printf("Sun.\n");
	}
	return 0;
}
