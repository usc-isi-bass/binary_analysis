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
	int a,b,c,s,d,y;
	scanf("%d%d%d",&a,&b,&c);
	if(b==1)
	{
		s=0;
	}
	else if(b==2)
	{
		s=31;
	}
	else if(b==3)
	{
		if(a%4==0||a%400==0)
		{
			s=31+29;
   		}
		else
		{
			s=31+28;
		}
	}
	else if(b==4)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31;
   		}
		else
		{
			s=31+28+31;
		}
	}
	else if(b==5)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31+30;
   		}
		else
		{
			s=31+28+31+30;
		}
	}
	else if(b==6)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31+30+31;
   		}
		else
		{
			s=31+28+31+30+31;
		}
	}
	else if(b==7)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31+30+31+30;
   		}
		else
		{
			s=31+28+31+30+31+30;
		}
	}
	else if(b==8)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31+30+31+30+31;
   		}
		else
		{
			s=31+28+31+30+31+30+31;
		}
	}
	else if(b==9)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31+30+31+30+31+31;
   		}
		else
		{
			s=31+28+31+30+31+30+31+31;
		}
	}
   else if(b==10)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31+30+31+30+31+31+30;
   		}
		else
		{
			s=31+28+31+30+31+30+31+31+30;
		}
	}
	else if(b==11)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31+30+31+30+31+31+30+31;
   		}
		else
		{
			s=31+28+31+30+31+30+31+31+30+31;
		}
	}
	else if(b==12)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			s=31+29+31+30+31+30+31+31+30+31+30;
   		}
		else
		{
			s=31+28+31+30+31+30+31+31+30+31+30;
		}
	}
	a--;
    d=a+a/4+a/400-a/100;
	y=(s+c+d)%7;
    if(y==1)
	{
		printf("Mon.");
	}
	else if(y==2)
	{
		printf("Tue.");
	}	
    else if(y==3)
	{
		printf("Wed.");
	}
	else if(y==4)
	{
		printf("Thu.");
	}
	else if(y==5)
	{
		printf("Fri.");
	}
	else if(y==6)
	{
		printf("Sat.");
	}
	else if(y==0)
	{
		printf("Sun.");
	}

	return 0;
}