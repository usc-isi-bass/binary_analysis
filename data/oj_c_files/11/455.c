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
	int y,m,d,sum;
	scanf("%d%d%d",&y,&m,&d);
	if(m==1)
		sum=d;
	if(m==2)
		sum=31+d;
	if(y%4==0&&y%100!=0||y%400==0)
	{
		if(m==3)
			sum=31+29+d;
		if(m==4)
			sum=31+29+31+d;
		if(m==5)
			sum=31+29+31+30+d;
		if(m==6)
            sum=31+29+31+30+31+d;
		if(m==7)
			sum=31+29+31+30+31+30+d;
		if(m==8)
			sum=31+29+31+30+31+30+31+d;
		if(m==9)
			sum=31+29+31+30+31+30+31+31+d;
		if(m==10)
			sum=31+29+31+30+31+30+31+31+30+d;
		if(m==11)
			sum=31+29+31+30+31+30+31+31+30+31+d;
		if(m==12)
			sum=31+29+31+30+31+30+31+31+30+31+30+d;
	}
	else
	{if(m==3)
			sum=31+28+d;
		if(m==4)
			sum=31+28+31+d;
		if(m==5)
			sum=31+28+31+30+d;
		if(m==6)
            sum=31+28+31+30+31+d;
		if(m==7)
			sum=31+28+31+30+31+30+d;
		if(m==8)
			sum=31+28+31+30+31+30+31+d;
		if(m==9)
			sum=31+28+31+30+31+30+31+31+d;
		if(m==10)
			sum=31+28+31+30+31+30+31+31+30+d;
		if(m==11)
			sum=31+28+31+30+31+30+31+31+30+31+d;
		if(m==12)
			sum=31+28+31+30+31+30+31+31+30+31+30+d;
	}
	printf("%d\n",sum);
	return 0;
}