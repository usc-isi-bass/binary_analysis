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

main(){
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	int i;
	
	if(year%4==0||year%100==0){
		if(month==1){
			i=day;
		}
		else if(month==2){
			i=(month-1)*31+day;
		}
		else{
			i=(month-1)*31+day-month/2-1;
		}
	}
	else{
		if(month==1){
			i=day;
		}
		else if(month==2){
			i=(month-1)*31+day;
		}
		else{
			i=(month-1)*31+day-month/2-1;
		}
	}
	
	printf("%d",i);






	return 0;
}