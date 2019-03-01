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
	int year;
	short month,day,result=0,i=1;
	char odd;
	while(i<=5)
	{
		scanf("%d%hd%hd",&year,&month,&day);
		odd=year%400==0||year%4==0&&year%100!=0?1:0;
		switch(month)
		{
			case 12:result+=30;
			case 11:result+=31;
			case 10:result+=30;
			case 9: result+=31;
			case 8: result+=31;
			case 7: result+=30;
			case 6: result+=31;
			case 5: result+=30;
			case 4: result+=31;
			case 3: result+=28;
			case 2: result+=31;
			case 1:	;
		}
		if(month>=3)	result+=odd;
		result+=day;
		printf("%hd\n",result);
		result=0;
		i++;
	}
	return(0);
}
	

