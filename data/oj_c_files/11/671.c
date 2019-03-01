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
	int year,month,day;
	int Sn=0;
	int i=0;
	scanf("%d%d%d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		int months[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		while(i<month-1)
		{
			Sn=Sn+months[i];
			i++;
		}
		Sn=Sn+day;
	}
	else
	{
		int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		while(i<month-1)
		{
			Sn=Sn+months[i];
			i++;
		}
		Sn=Sn+day;
	}
	printf("%d",Sn);




	return 0;
}