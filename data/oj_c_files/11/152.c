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

main()
{
	int year;
	int month;
	int day;
	int result=0;
	int i;
	int yue[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	scanf("%d %d %d",&year,&month,&day);
	
	if((year%100==0&&year%400==0)||year%100!=0&&year%4==0)
		yue[1]=29;

	if(month==1)
	{
		result=result+day;
		printf("%d",result);

	}
	if(month>1)
	{
		for(i=0;i<month-1;i++)
		{
			result=result+yue[i];
		}
		result=result+day;
		printf("%d\n",result);
	
	}



	


}