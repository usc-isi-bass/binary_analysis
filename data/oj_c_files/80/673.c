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

int Month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int leapyear(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        return 366;
    else
        return 365;
}
int Days(int startyear,int month,int day)
{
    int days=0,j;
    for(j=0;j<month;j++)
       days+=Month[j];
    days+=day;
    if((leapyear(startyear)==366)&&(month>2))
        return days+1;
    else
        return days;
}
int main()
{

    int StartY,StartM,StartD,EndY,EndM,EndD,sum=0,i;
    cin>>StartY>>StartM>>StartD;
    cin>>EndY>>EndM>>EndD;
    if(StartY==EndY)
	    cout<<Days(EndY,EndM,EndD)-Days(StartY,StartM,StartD);
    else
    {
	    for(i=StartY;i<EndY;i++)
	        sum+=leapyear(i);
	    sum+=Days(EndY,EndM,EndD)-Days(StartY,StartM,StartD);
	    cout<<sum<<endl;
    }
    return 0;
}