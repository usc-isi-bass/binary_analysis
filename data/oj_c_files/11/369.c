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
	int a,b,c,day,m;
	scanf("%d %d %d",&a,&b,&c); 
	if(a%4==0&&a%100!=0||a%4==0&&a%400==0)
	{
		m=29;
	}
	else
	{
		m=28;
	}
	switch(b)
	{
		case 1:day=c;break;
		case 2:day=31+c;break;
		case 3:day=31+m+c;break;
		case 4:day=31+m+31+c;break;
		case 5:day=31+m+31+30+c;break;
		case 6:day=31+m+31+30+31+c;break;
		case 7:day=31+m+31+30+31+30+c;break;
		case 8:day=31+m+31+30+31+30+31+c;break;
		case 9:day=31+m+31+30+31+30+31+31+c;break;
		case 10:day=31+m+31+30+31+30+31+31+30+c;break;
        case 11:day=31+m+31+30+31+30+31+31+31+30+c;break;
        case 12:day=31+m+31+30+31+30+31+31+30+30+31+c;break;
	}
	printf("%d",day);
	return 0;
}