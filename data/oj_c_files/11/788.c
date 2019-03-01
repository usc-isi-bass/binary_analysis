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
int year,month,day,sum,a[13];
scanf("%d %d %d",&year,&month,&day);
a[1]=31;
a[3]=31;
a[4]=30;
a[5]=31;
a[6]=30;
a[7]=31;
a[8]=31;
a[9]=30;
a[10]=31;
a[11]=30;
a[12]=31;
         if((year%100!=0&&year%4==0)||(year%400==0))
         a[2]=29;
         else a[2]=28;
sum=day;
for(int i=1;i<month;i++)
sum=sum+a[i];
printf("%d",sum);
getchar();
getchar();
}
