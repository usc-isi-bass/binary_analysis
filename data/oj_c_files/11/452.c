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
	int y,m,d,x=0,i;
	scanf("%d%d%d",&y,&m,&d);
	if(y%4==0&&y%100!=0||y%400==0)
	{
		for(i=1;i<m;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				x=x+31;
			else if(i==4||i==6||i==9||i==11)
				x=x+30;
			else
				x=x+29;
		}
		x=x+d;
	}
	else
	{
		for(i=1;i<m;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				x=x+31;
			else if(i==4||i==6||i==9||i==11)
				x=x+30;
			else
				x=x+28;
		}
		x=x+d;
	}
	printf("%d\n",x);
	return 0;
}

