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

struct
{
	int year;
	int month;
	int day;
}date;
main()
{
	int days;
	scanf("%d%d%d",&date.year,&date.month,&date.day);
	switch(date.month)
	{
	case 1:days=date.day;      break;
	case 2:days=date.day+31;   break;
	case 3:days=date.day+59;   break;
	case 4:days=date.day+90;   break;
	case 5:days=date.day+120;  break;
	case 6:days=date.day+151;  break;
	case 7:days=date.day+181;  break;
	case 8:days=date.day+212;  break;
	case 9:days=date.day+243;  break;
	case 10:days=date.day+273;  break;	
	case 11:days=date.day+304;  break;
	case 12:days=date.day+334;  break;
	}
	if ((date.year%4==0&&date.year%100!=0||date.year%400==0)&&date.month>=3)days+=1;
	printf("%d",days);
	return 0;
}