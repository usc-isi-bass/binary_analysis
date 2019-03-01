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
    int year,month,day,daynum=0,i;
    cin>>year>>month>>day;
    int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int judgeleap;
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        for(i=0;i<month-1;i++)
        {
            daynum+=month2[i];
        }
    }
    else
    {
        for(i=0;i<month-1;i++)
        {
            daynum+=month1[i];
        }
    }
    daynum=daynum+day;
    cout<<daynum;
    return 0;
}