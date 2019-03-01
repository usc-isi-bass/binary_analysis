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

int leap(int year){
	if((year%4==0 && year%100!=0) || year%400==0)
		return 1;
	else{
		return 0;
	}
}
void main(){
	int year,month,day;
	int days,i;
	days=0;
	scanf("%d%d%d",&year,&month,&day);
	for(i=1;i<month;i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			days+=31;
		if(i==4 || i==6 || i==9 || i==11)
			days+=30;
		if(i==2){
			if(leap(year))
				days+=29;
			else{
				days+=28;
			}
		}
	}
	days+=day;
	printf("%d\n",days);
}


