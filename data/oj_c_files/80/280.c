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
	int y1,m1,d1,y2,m2,d2,d=0;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	if (m1>=3)
		y1=y1+1;
	if (m2>=3)
		y2=y2+1;
	while(y1<y2)
	{
		if(y1%4==0&&y1%100!=0||y1%400==0) 
		{
			d=d+366;
			y1++;
		}
		else
		{
			d=d+365;
			y1++;
		}
	}
	if (m1==1)
		m1=13;
	if(m1==2)
		m1=14;
	if (m2==1)
		m2=13;
	if(m2==2)
		m2=14;

    while(m1<m2)
	{
		if(m1==3||m1==5||m1==7||m1==8||m1==10||m1==12||m1==13)
		{
			d=d+31;
			m1++;
		}
		if(m1==4||m1==6||m1==9||m1==11)
		{
			d=d+30;
			m1++;
		}
	}
		while(m1>m2)
		{
			if(m2==3||m2==5||m2==7||m2==8||m2==10||m2==12||m2==13)
		{
			d=d-31;
			m2++;
		}
		if(m2==4||m2==6||m2==9||m2==11)
		{
			d=d-30;
			m2++;
		}
	}
			d=d+d2-d1;
			printf("%d",d);
}


