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


struct form{
	int month;
	int day;
	int date;
}every[365];

void main(){
	int firstday,month=1,date=1,day;
	int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	scanf("%d",&firstday);
	day=firstday;
	for(i=0;i<365;i++){
		every[i].month=month;
		every[i].day=day;
		every[i].date=date;
		if(every[i].date==monthday[month-1]){
			month++;
			date=1;
		}else{
			date++;
		}
		if(every[i].day==7){
			day=1;
		}else{
			day++;
		}
	}
	for(i=0;i<365;i++){
		if(every[i].date==13&&every[i].day==5){
			printf("%d\n",every[i].month);
		}
	}
}
