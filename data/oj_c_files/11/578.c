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
	int y,m,d,a,s;
	scanf("%d%d%d",&y,&m,&d);
	if((y%4==0&&y%100!=0)||(y%100==0&&y%400==0)){
		a=29;
	}
	else a=28;
	if(m==1){
		s=d;
	}
	else if(m==2){
		s=31+d;
	}
	else if(m==3){
		s=31+a+d;
	}
	else if(m==4){
		s=31*2+a+d;
	}
	else if(m==5){
		s=31*2+a+30+d;
	}
	else if(m==6){
		s=31*3+a+d+30;
	}
	else if(m==7){
		s=31*3+a+d+30*2;
	}
	else if(m==8){
		s=31*4+a+d+30*2;
	}
	else if(m==9){
		s=31*5+a+d+30*2;
	}
	else if(m==10){
		s=31*5+a+d+30*3;
	}
	else if(m==11){
		s=31*6+a+d+30*3;
	}
	else if(m==12){
		s=31*6+a+d+30*4;
	}
	else;
	printf("%d\n",s);
	return 0;
}
