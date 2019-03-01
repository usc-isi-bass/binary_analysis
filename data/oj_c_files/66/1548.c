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
	int y,m,d;
	cin>>y>>m>>d;
	int day=0;
	day=y-1+(y-1-((y-1)%4))/4-(y-1-((y-1)%100))/100+(y-1-((y-1)%400))/400;
	int a[11]={3,0,3,2,3,2,3,3,2,3,2};
	if( (y%4==0&&y%4!=100) || y%400==0) a[1]=1;
	for(int i=1;i<m;i++)
		day+=a[i-1];
	day+=d;
	day=day%7;
		if(day==1)cout<<"Mon.";
		if(day==2)cout<<"Tue.";
		if(day==3)cout<<"Wed.";
		if(day==4)cout<<"Thu.";
		if(day==5)cout<<"Fri.";
		if(day==6)cout<<"Sat.";
		if(day==0)cout<<"Sun.";
	return 0;
}