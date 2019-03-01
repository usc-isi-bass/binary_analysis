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
	int year,month,day,days=0,i=1;
	int month_str1[12]={31,28,31,30,31,30,31,31,30,31,30,31},month_str2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>year>>month>>day;
	if((year%4==0&&year%100!=0)||year%400==0)
		while(i!=month)
		{
			days+=month_str2[i-1];
			i++;
		}
	else
		while(i!=month)
		{
			days+=month_str1[i-1];
			i++;
		}
	cout<<days+day;
	return 0;
}