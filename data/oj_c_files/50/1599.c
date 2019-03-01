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


int day(int month){
	int t=0,i;
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			t+=31;
		}else if(i==4||i==6||i==9||i==11){
			t+=30;
		}else if(i==2){
			t+=28;
		}
	}

	return t;
}

int main()
{
	int w,i,t,a;

	scanf("%d",&w);

	for(i=1;i<=12;i++){
		t=0;
		t=13+day(i);
		
		a=t%7+w-1;
		if(a>7){
			a=a-7;	
		}
		if(a==5){
			printf("%d\n",i);
		}
	}
	return 0;
}