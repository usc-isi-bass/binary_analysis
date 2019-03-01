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
	void print(int n);
	unsigned year,month,day,d,date;
     scanf("%d%d%d",&year,&month,&day);
	if(month==1||month==2)
	{year=year-1;
	month=month+12;                  
	}
     d= (day+2*month+3*(month+1)/5+year+year/4-year/100+year/400) ; 
	 date=d%7+1;   
	 print(date);return 0;
}

void print(int n)
{
	switch (n)
	{
	case 1:printf("Mon.");break;
	case 2:printf("Tue.");break;
	case 3:printf("Wed.");break;
	case 4:printf("Thu.");break;
	case 5:printf("Fri.");break;
	case 6:printf("Sat.");break;
	case 7:printf("Sun.");break;
	
	}
}
