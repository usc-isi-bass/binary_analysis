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

int isRunNian(int year)
{
	if(year%400==0||(year%4==0&&year%100!=0))
		return 1;
	return 0;
}
int main()
{
int year,month,day,days=0;
int i,s,k;
int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
char *week[7]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
scanf("%d%d%d",&year,&month,&day);
if(isRunNian(year))
	m[2]=29;
	else
		m[2]=28;
for (i=0;i<month;i++)
{
  days+=m[i];
}
 days+=day;
s=year-1+(int)((year-1)/4)-(int)((year-1)/100)+(int)((year-1)/400)+days;
k=s%7;
printf("%s",week[k]);
return 0;
}