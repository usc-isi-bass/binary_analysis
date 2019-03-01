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
int y,m,d,i,x=0;
int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
scanf("%d%d%d",&y,&m,&d);
if(y%4==0&&y%100!=0)
{
mon[1]=29;
}
else if(y%400==0)
{
mon[1]=29;
}
else
mon[1]=28;

for(i=0;i<m-1;i++)
	{
		x+=mon[i];
	}
x=x+d;
printf("%d\n",x);
return 0;
}