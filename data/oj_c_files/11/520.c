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
int a,b,c,x,i;
scanf("%d %d %d",&a,&b,&c);
if(a%4==0&&a%100!=0)
{
  int n[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  for(i=0,x=0;i<b-1;i++)
  {    
	x=x+n[i];
  }
}
if(a%400==0)
{
  int n[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  for(i=0,x=0;i<b-1;i++)
  {    
	x=x+n[i];
  }
}
else
{
  int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  for(i=0,x=0;i<b-1;i++)
  {    
	x=x+n[i];
  } 
}
x=x+c;
printf("%d",x);
return 0;
}