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
	int y,m,d,a;
	scanf("%d%d%d",&y,&m,&d);
	if(y%4!=0){
		switch(m){
		case 1:a=d;break;
		case 2:a=31+d;break;
		case 3:a=31+28+d;break;
		case 4:a=31+28+31+d;break;
		case 5:a=31+28+31+30+d;break;
		case 6:a=31+28+31+30+31+d;break;
		case 7:a=31+28+31+30+31+30+d;break;
		case 8:a=31+28+31+30+31+30+31+d;break;
		case 9:a=31+28+31+30+31+30+31+31+d;break;
		case 10:a=31+28+31+30+31+30+31+31+30+d;break;
		case 11:a=31+28+31+30+31+30+31+31+30+31+d;break;
		case 12:a=31+28+31+30+31+30+31+31+30+31+30+d;break;
		}
		printf("%d",a);
	}
	else if(y%400==0){
		switch(m){
		case 1:a=d;break;
		case 2:a=31+d;break;
		case 3:a=31+29+d;break;
		case 4:a=31+29+31+d;break;
		case 5:a=31+29+31+30+d;break;
		case 6:a=31+29+31+30+31+d;break;
		case 7:a=31+29+31+30+31+30+d;break;
		case 8:a=31+29+31+30+31+30+31+d;break;
		case 9:a=31+29+31+30+31+30+31+31+d;break;
		case 10:a=31+29+31+30+31+30+31+31+30+d;break;
		case 11:a=31+29+31+30+31+30+31+31+30+31+d;break;
		case 12:a=31+29+31+30+31+30+31+31+30+31+30+d;break;
		}
		printf("%d",a);
	}
	else if(y%4==0&&y%100==0&&y%400!=0){
		switch(m){
		case 1:a=d;break;
		case 2:a=31+d;break;
		case 3:a=31+28+d;break;
		case 4:a=31+28+31+d;break;
		case 5:a=31+28+31+30+d;break;
		case 6:a=31+28+31+30+31+d;break;
		case 7:a=31+28+31+30+31+30+d;break;
		case 8:a=31+28+31+30+31+30+31+d;break;
		case 9:a=31+28+31+30+31+30+31+31+d;break;
		case 10:a=31+28+31+30+31+30+31+31+30+d;break;
		case 11:a=31+28+31+30+31+30+31+31+30+31+d;break;
		case 12:a=31+28+31+30+31+30+31+31+30+31+30+d;break;
		}
		printf("%d",a);
	}
	else if(y%4==0&&y%100!=0){
		switch(m){
		case 1:a=d;break;
		case 2:a=31+d;break;
		case 3:a=31+29+d;break;
		case 4:a=31+29+31+d;break;
		case 5:a=31+29+31+30+d;break;
		case 6:a=31+29+31+30+31+d;break;
		case 7:a=31+29+31+30+31+30+d;break;
		case 8:a=31+29+31+30+31+30+31+d;break;
		case 9:a=31+29+31+30+31+30+31+31+d;break;
		case 10:a=31+29+31+30+31+30+31+31+30+d;break;
		case 11:a=31+29+31+30+31+30+31+31+30+31+d;break;
		case 12:a=31+29+31+30+31+30+31+31+30+31+30+d;break;
		}
		printf("%d",a);
	}
	return 0;
}


