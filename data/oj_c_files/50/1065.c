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
	int a,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12;

	scanf("%d",&a);

	y1=(a+12)%7;
	y2=(a+31+12)%7;
	y3=(a+31+28+12)%7;
	y4=(a+31+28+31+12)%7;
	y5=(a+31+28+31+30+12)%7;
	y6=(a+31+28+31+30+31+12)%7;
	y7=(a+31+28+31+30+31+30+12)%7;
	y8=(a+31+28+31+30+31+30+31+12)%7;
	y9=(a+31+28+31+30+31+30+31+31+12)%7;
	y10=(a+31+28+31+30+31+30+31+31+30+12)%7;
	y11=(a+31+28+31+30+31+30+31+31+30+31+12)%7;
	y12=(a+31+28+31+30+31+30+31+31+30+31+30+12)%7;
	
	if(y1==5)
	{
		printf("1\n");
	}
	if(y2==5)
	{
		printf("2\n");
	}
	if(y3==5)
	{
		printf("3\n");
	}if(y4==5)
	{
		printf("4\n");
	}
	if(y5==5)
	{
		printf("5\n");
	}
	if(y6==5)
	{
		printf("6\n");
	}
	if(y7==5)
	{
		printf("7\n");
	}
	if(y8==5)
	{
		printf("8\n");
	}
	if(y9==5)
	{
		printf("9\n");
	}
	if(y10==5)
	{
		printf("10\n");
	}
	if(y11==5)
	{
		printf("11\n");
	}
	if(y12==5)
	{
		printf("12\n");
	}
	return 0;
}