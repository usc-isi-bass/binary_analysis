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
	int w;
	scanf("%d",&w);
	int i,d=12;
	for(i=1;i<=12;i++){
		if(i==3){
			d+=28;
		}
		else if(i==5||i==7||i==10||i==12){
			d+=30;
		}
		else if(i==2||i==4||i==6||i==8||i==9||i==11){
			d+=31;
		}
		if((d%7+w)%7==5){
			printf("%d\n",i);
		}
	}
return 0;
}