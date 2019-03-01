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

void CWD(int y, int m, int d)
{
	if(m==1||m==2)
	{
		m=m+12;
		y--;
	}
	int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
	switch(iWeek)
	{
	case 0:printf("Mon.");break;
	case 1:printf("Tue.");break;
	case 2:printf("Wed.");break;
	case 3:printf("Thu.");break;
	case 4:printf("Fri.");break;
	case 5:printf("Sat.");break;
	case 6:printf("Sun.");break;
	}
}
int main()
{
	int year=0,month=0,day=0;
	scanf("%d%d%d",&year,&month,&day);
	CWD(year,month,day);
}
