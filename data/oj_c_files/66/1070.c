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


char weekday[][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
short month[]={31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int y,m,d;
	long long days,lys=0;
	cin>>y>>m>>d;
	if (y%4==0 && y%400!=0 && m>=3) lys+=1;
	y--,m--;
	lys+=y/4-y/100+y/400;
	days=(long long)y*365+lys;
	for (int i=0;i<m;i++)
		days+=month[i];
	days+=d;
	
	cout<<weekday[days%7];
	return 0;
}
