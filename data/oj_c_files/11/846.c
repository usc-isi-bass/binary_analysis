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

int leapyear(int year){
	if(year%400==0||(year%4==0&&year%100!=0))
		return 1;
	else
		return 0;
}
int whichday(int year,int month,int day){
	int mon[MONTH]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d=0,i;
	if(leapyear(year)==1)
		mon[1]++;
	for(i=0;i<month-1;i++)
		d+=mon[i];
	d+=day;
	return d;
}
int main(){
	int year,month,day;
	int d;
	scanf("%d%d%d",&year,&month,&day);
	d=whichday(year,month,day);
	printf("%d",d);
}
