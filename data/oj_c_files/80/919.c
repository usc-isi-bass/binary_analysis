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
	int y1,y2,m1,m2,d1,d2,d=0,m=0,i;
	scanf("%d %d %d\n%d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	if(y1==y2)
	{
		if(m1==m2)
		d=d2-d1;
		else
		{
		for(i=m1;i<m2;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10)
			d+=31;
			else
			if(i==4||i==6||i==9||i==11)
			d+=30;
			else
			if(((y1%4==0&&y1%100!=0)||y1%400==0)&&i==2)
			d+=29;
			else
			d+=28;
		}
		d+=d2-d1;
	    }
	}
	else
	{
		for(i=m1;i<m2+12;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12||i==13||i==15||i==17||i==19||i==20||i==22)
			d+=31;
			else
			if(i==4||i==6||i==9||i==11||i==16||i==18||i==21||i==23)
			d+=30;
			else
			if(((y1%4==0&&y1%100!=0)||y1%400==0)&&(i==2||i==14))
			d+=29;
			else
			d+=28;
		}
		d+=d2-d1;
		if(y2-y1>=2)
		{
			for(i=y1;i<y2-1;i++)
			{
				if((i%4==0 && i%100!=0)||i%400==0)
				d+=366;
				else
				d+=365;
			}
	}
	}
	if(d>366)
	d++;
	printf("%d",d);
	return 0;
}