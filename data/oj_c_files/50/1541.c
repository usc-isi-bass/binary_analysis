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

int main()
{
	int n,i,d,t;
	scanf("%d",&n);
	for(i=1;i<=12;i++){
		if(i==1){
			d=12;
		}
		if(i==2){
			d=31+12;
		}
		if(i==3){
			d=31+28+12;
		}
		if(i==4){
			d=31+28+31+12;
		}
		if(i==5){
			d=31+28+31+30+12;
		}
		if(i==6){
			d=31+28+31+30+31+12;
		}
		if(i==7){
			d=31+28+31+30+31+30+12;
		}
		if(i==8){
			d=31+28+31+30+31+30+31+12;
		}
		if(i==9){
			d=31+28+31+30+31+30+31+31+12;
		}
		if(i==10){
			d=31+28+31+30+31+30+31+31+30+12;
		}
		if(i==11){
			d=31+28+31+30+31+30+31+31+30+31+12;
		}
		if(i==12){
			d=31+28+31+30+31+30+31+31+30+31+30+12;
		}
		t=d%7;
		if(n<5){
			if(t+n==5){
			printf("%d\n",i);
			}
		}else if(n==5){
			if(t==0){
				printf("%d\n",i);
			}
		}else if(n>5){
			if(t+n==12){
				printf("%d\n",i);
			}
		}else{
			break;
		}

	}
	return 0;
}