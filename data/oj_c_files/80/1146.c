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


int x[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int y1,m1,d1,y2,m2,d2,ctr=0;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	while(y2-y1>=2)
	{
		ctr+=365;
		if(((m1==1 || (m1==2 && d1<=28)) && ((y1%4==0 && y1%100!=0) || (y1%400==0)))
			|| (m1>=3 && (((y1+1)%4==0 && (y1+1)%100!=0) || ((y1+1)%400==0)) ))
			ctr++;
		y1++;
	}
	if(y2-y1==1)
	{
		while(m1!=13)
		{
			ctr+=x[m1];
			if(m1==2 && ((y1%4==0 && y1%100!=0) || (y1%400==0)))
				ctr++;
			m1++;
		}
		m1=1;y1++;
	}
	while(m1!=m2)
	{
		ctr+=x[m1];
		if(m1==2 && ((y1%4==0 && y1%100!=0) || (y1%400==0)))
			ctr++;
		m1++;
	}
	ctr+=d2-d1;
	cout<<ctr<<endl;
}