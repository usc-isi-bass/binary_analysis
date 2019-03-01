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
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day,i,num=0;
    scanf("%d%d%d",&year,&month,&day);
    if(year%4==0)
    {
       if(year%100==0&&year%400!=0)
          a[2]=28;
       else if(year%400==0)
          a[2]=29;
       else a[2]=29;
    }
    else a[2]=28;
    for(i=1;i<month;i++)
       num=num+a[i];
    num=num+day;
    printf("%d",num);
    return 0;
}