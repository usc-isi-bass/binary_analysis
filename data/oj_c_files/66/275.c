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



void main()
{
	int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	char week[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};

	int year,mon,day;
	int result=0;

	//printf("%d\n",(1*366+3*365)%7);

	scanf("%d %d %d",&year,&mon,&day);

	int temp=year;
	year=year-1;

	result+=(year/400)*FOURFUN;
	year=year%400;

	result+=(year/100)*ONEFUN;
	year=year%100;

	result+=(year/20)*TWEN;
	year=year%20;

	result+=(year/4)*FOUR;
	year=year%4;

	result+=ONE*year;

	int flag=0;

	if(temp%400==0)
		flag=1;
	else if(temp%100!=0&&temp%4==0)
		flag=1;

	if(flag==1)
	{
		int i;
		for(i=0;i<mon-1;i++)
			result+=run[i];
		result+=day;
	}
	else
	{
		int i;
		for(i=0;i<mon-1;i++)
			result+=ping[i];
		result+=day;
	}
	result=result%7;

	printf("%s\n",week[result]);
}