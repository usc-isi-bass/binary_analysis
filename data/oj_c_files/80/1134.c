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
	int y1,m1,d1,y2,m2,d2,sum1=0,sum2=0,x,k; 
	scanf("%d %d %d\n%d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	sum1=sum1+d1;
	sum2=sum2+d2;
	for(k=1;k<m1;k++)
	{
		if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
		{
			sum1=sum1+31;
		}
		else if(k==4||k==6||k==9||k==11)
		{
			sum1=sum1+30;
		}
		else if(k==2)
		{
			if((y1%4==0&&y1%100!=0)||(y1%400==0))
			{
				sum1=sum1+29;
			}
			else
			{
				sum1=sum1+28;
			}
		}
	}
    for(k=1;k<m2;k++)
	{
		if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
		{
			sum2=sum2+31;
		}
		else if(k==4||k==6||k==9||k==11)
		{
			sum2=sum2+30;
		}
		else if(k==2)
		{
			if((y2%4==0&&y2%100!=0)||(y2%400==0))
			{
				sum2=sum2+29;
			}
			else
			{
				sum2=sum2+28;
			}
		}
	}
    for(k=y1;k<y2;k++)
	{
		if((k%4==0&&k%100!=0)||(k%400==0))
		{
			sum2=sum2+366;
		}
		else
		{
			sum2=sum2+365;
		}
	}
    x=sum2-sum1;
	printf("%d\n",x);
	return 0;
}

