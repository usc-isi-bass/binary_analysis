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
   int y,m,d,n; 
   scanf("%d",&y);
   if((y%4==0&&y%100!=0)||(y%400==0))
   {
	   scanf("%d%d",&m,&d);
	if(m==1)
	{n=d;}
	if(m==2)
	{n=31+d;}
	if(m==3)
	{n=31+29+d;}
	if(m==4)
	{n=31+29+d+31;}
	if(m==5)
	{n=31+29+d+31+30;}
	if(m==6)
	{n=31+29+d+31+30+31;}
	if(m==7)
	{n=31+29+d+31+30+31+30;}
    if(m==8)
	{n=31+29+d+31+30+31+30+31;}
	if(m==9)
	{n=31+29+d+31+30+31+30+31+31;}
	if(m==10)
	{n=31+29+d+31+30+31+30+31+31+30;}
	if(m==11)
	{n=31+29+d+31+30+31+30+31+31+30+31;}
	if(m==12)
	{n=31+29+d+31+30+31+30+31+31+30+31+30;}
	printf("%d",n);
   
   }
   else
    {
	   scanf("%d%d",&m,&d);
	if(m==1)
	{n=d;}
	if(m==2)
	{n=31+d;}
	if(m==3)
	{n=31+28+d;}
	if(m==4)
	{n=31+28+d+31;}
	if(m==5)
	{n=31+28+d+31+30;}
	if(m==6)
	{n=31+28+d+31+30+31;}
	if(m==7)
	{n=31+28+d+31+30+31+30;}
    if(m==8)
	{n=31+28+d+31+30+31+30+31;}
	if(m==9)
	{n=31+28+d+31+30+31+30+31+31;}
	if(m==10)
	{n=31+28+d+31+30+31+30+31+31+30;}
	if(m==11)
	{n=31+28+d+31+30+31+30+31+31+30+31;}
	if(m==12)
	{n=31+28+d+31+30+31+30+31+31+30+31+30;}
	printf("%d",n);
   
   }
   return 0;
   }