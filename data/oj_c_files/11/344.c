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

int main(int argc, char* argv[])
{
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		if(m==1)
			printf("%d",d);

if(m==2)
			printf("%d",d+31);
if(m==3)
			printf("%d",d+31+29);
if(m==4)
			printf("%d",d+31+29+31);
if(m==5)
			printf("%d",d+31+29+31+30);
			if(m==6)
				printf("%d",d+31+29+31+30+31);
			if(m==7)
				printf("%d",d+31+29+31+30+31+30);
			if(m==8)
				printf("%d",d+31+29+31+30+31+30+31);
			if(m==9)
				printf("%d",d+31+29+31+30+31+30+31+31);
			if(m==10)
				printf("%d",d+31+29+31+30+31+30+31+31+30);
			if(m==11)
				printf("%d",d+31+29+31+31+30+30+31+31+30+31);
			if(m==12)
				printf("%d",d+31+29+31+31+30+30+31+31+30+31+30);
	}
	else
	{
	if(m==1)
			printf("%d",d);

if(m==2)
			printf("%d",d+31);
if(m==3)
			printf("%d",d+31+28);
if(m==4)
			printf("%d",d+31+28+31);
if(m==5)
			printf("%d",d+31+29+30+30);
			if(m==6)
				printf("%d",d+31+29+31+30+30);
			if(m==7)
				printf("%d",d+31+29+31+30+30+30);
			if(m==8)
				printf("%d",d+31+29+31+30+31+30+30);
			if(m==9)
				printf("%d",d+31+29+31+30+31+30+31+30);
			if(m==10)
				printf("%d",d+31+29+31+30+31+30+31+31+29);
			if(m==11)
				printf("%d",d+31+29+31+31+30+30+31+31+30+30);
			if(m==12)
				printf("%d",d+31+29+31+31+30+30+31+31+30+31+29);
	}
	return 0;
}