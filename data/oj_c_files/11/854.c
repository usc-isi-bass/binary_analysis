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
	int a,b,c,s=0,d=0;
	int i;
	scanf("%d %d %d",&a,&b,&c);
	if(((a%4==0)&&((a%100)!=0))||((a%400)==0))
	{      
		d=1;
	}
	
	for(i=1;i<b;i++)
	{
		if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
		{
			s=s+31;
		}
		if((i==4)||(i==6)||(i==9)||(i==11))
		{
			s=s+30;
		}
		if(i==2)
		{
			if(d==0)
			{
				s=s+28;
			}
			if(d==1)
			{
				s=s+29;
			}
		}
	}
	s=s+c;
	printf("%d",s);
	return 0;
}


