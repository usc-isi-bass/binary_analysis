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
int i,j,n,y,m1,m2,b,t,s,a[12]={0,31,28,31,30,31,30,31,31,30,31,30,31};
scanf("%d",&n);
for(i=1;i<=n;i++)
{b=0;
scanf("%d%d%d",&y,&m1,&m2);
if(y%4==0&&y%100!=0||y%400==0)
{b=1;}
if(m1>m2)
{t=m1;
m1=m2;
m2=t;}
s=0;
for(j=m1;j<=m2-1;j++)
{s+=a[j];
if(j==2&&b==1)
{s++;}}
if(s%7==0)
{printf("YES\n");}
else
{printf("NO\n");}}
return 0;
}