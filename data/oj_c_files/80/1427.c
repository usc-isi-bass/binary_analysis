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
{int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int x[2],y[2],z[2],s=0,m,i;
scanf("%d %d %d\n",&x[0],&y[0],&z[0]);
scanf("%d %d %d\n",&x[1],&y[1],&z[1]);
m=x[0];
if(x[0]<x[1])
{for(;x[0]<x[1];x[0]++)
{if(x[0]%4==0&&x[0]%100!=0||x[0]%400==0)
s=s+366;
else
	s=s+365;
}}
if(m%4==0&&m%100!=0||m%400==0)
{for(i=0;i<y[0]-1;i++)
s=s-b[i];}
else
	{for(i=0;i<y[0]-1;i++)
{s=s-a[i];}}
	s=s-z[0];
	if(x[1]%4==0&&x[1]%100!=0||x[1]%400==0)
	{for(i=0;i<y[1]-1;i++)
	s=s+b[i];}
	else
		{for(i=0;i<y[1]-1;i++)
		s=s+a[i];}
	s=s+z[1];
	printf("%d",s);
}

