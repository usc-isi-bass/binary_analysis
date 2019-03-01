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

void printDigit(int z)
{
	switch(z)
	{
	case(0):printf("Sun.");break;
	case(1):printf("Mon.");break;
	case(2):printf("Tue.");break;
	case(3):printf("Wed.");break;
	case(4):printf("Thu.");break;
	case(5):printf("Fri.");break;
	case(6):printf("Sat.");break;
	}
}

void main()
{
	int year,month,day,sum,n,x=0,y,z;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int isleapyear(int year);
	scanf("%d %d %d",&year,&month,&day);
	if(year>4)
	{
	sum=((year-1)/4)-((year-1)/100)+((year-1)/400);
	}
	else
	{
		sum=0;
	}		
	
	for(n=1;n<month;n++)
	{
		x+=a[n];
	}
	x+=day;
	if(month>2&&isleapyear(year))
		x=x+1;
	y=365*((year-1)%7)+(sum+x)%7;
	z=y%7;
	printDigit(z);
}
int isleapyear(int year)
{
	return((year%4==0&&year%100!=0)||(year%400==0));

}
