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

int f(int x)
{
 int z;
 if(((x%4==0)&&(x%100!=0))||(x%400==0)) 
 z=1;
 else 
 z=0;
 return z;
 }
main()
{
 int year,month,day;
 int z,i=0,sum=0;
 int a[12],b[12];
 scanf("%d %d %d",&year,&month,&day);
 z=f(year);
 if(z==1) 
 {int a[]={31,29,31,30,31,30,31,31,30,31,30,31};
 for(i=0;i<month-1;i++)
 {
 sum=sum+a[i];
 }
 }
 else 
 {
 int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
 for(i=0;i<month-1;i++)
 {
 sum=sum+a[i];
 } 
}
 sum=sum+day;
 printf("%d",sum);
 getchar();
 getchar();
 return 0;
 }
