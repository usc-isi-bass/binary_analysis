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

int leap(int n)
{
	if((n%4==0&&n%100!=0)||n%400==0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int y,m,d,sum=0;
	cin>>y>>m>>d;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	sum=(y-1+(y-1)/4-(y-1)/100+(y-1)/400)%7;
	month[2]=month[2]+leap(y);
	for(int i=0;i<m;i++)
	{
		sum+=month[i];
	}
	sum+=d-1;
	sum=sum%7;
	switch(sum)
	{
		case 0:cout<<"Mon."<<endl;break;
		case 1:cout<<"Tue."<<endl;break;
		case 2:cout<<"Wed."<<endl;break;
		case 3:cout<<"Thu."<<endl;break;
		case 4:cout<<"Fri."<<endl;break;
		case 5:cout<<"Sat."<<endl;break;
		case 6:cout<<"Sun."<<endl;break;
	}
	return 0;
}