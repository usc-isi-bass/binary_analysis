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
	int w,m;
	scanf("%d",&w);
	for(m=1;m<=12;m++){
		if(m==1||
		   m==3||
		   m==5||
		   m==7||
		   m==8||
		   m==10||
		   m==12){
	    	if((w+12)%7==5){
	    		printf("%d\n",m);
	    	}
	    	w=(w+31)%7;
		}
		if(m==4||
		   m==6||
		   m==9||
		   m==11){
			if((w+12)%7==5){
				printf("%d\n",m);
			}
			w=(w+30)%7;
	    }
		if(m==2){
			if((w+12)%7==5){
				printf("%d\n",m);
			}
			w=(w+28)%7;
		}
	}
	return 0;
}