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
	int year,month,day,res=0,i;
	int y[12];
	scanf("%d %d %d",&year,&month,&day);
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
		y[1]=29;
	else
		y[1]=28;
	y[0]=31;
	y[2]=31;
	y[4]=31;
	y[7]=31;
	y[6]=31;
	y[9]=31;
	y[3]=30;
	y[5]=30;
	y[8]=30;
	y[10]=30;
	for(i=0;i<month-1;i++)
		res+=y[i];
	res+=day;
	printf("%d",res);
}