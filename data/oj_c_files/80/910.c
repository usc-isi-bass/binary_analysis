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

int s(int a,int b)
{int i;
i=0;i=(a-1)/4-(a-1)/100+(a-1)/400;
if(((a%4==0&&a%100!=0)||(a%400==0))&&b>2)i+=1;
return i;
}
int l(int c,int d){
int i,sum=0;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31}; for(i=0;i<=c-2;i++)   {sum+=a[i];}sum+=d;
return sum; }
int main(){int y1,m1,d1,y2,m2,d2;
int sum;
scanf("%d%d%d",&y1,&m1,&d1);
scanf("%d%d%d",&y2,&m2,&d2);sum=s(y2,m2)-s(y1,m1)+l(m2,d2)-l(m1,d1)+365*(y2-y1);
printf("%d",sum);
return 0;}