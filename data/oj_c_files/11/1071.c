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
int year,month,date;
int day=0;
cin>>year>>month>>date;
if((year%400==0)||((year%4==0)&&(year%100!=0)))
{
	int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	for(int i=1;i<=(month-1);i++)
	{day+=a[i];}
	day+=date;
}
else
{
	int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1;i<=(month-1);i++)
		day+=b[i];
	day+=date;
}
cout<<day<<endl;
return 0;
}