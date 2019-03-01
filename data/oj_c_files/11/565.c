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
 int a,b,c,d;
 int f[12]={31,28,31,30,31,30,31,31,30,31,30,31};
scanf("%d%d%d",&a,&b,&c);
int sum=0,i;
	for(i=0;i<b-1;i++)
	{
		sum=sum+f[i];
	}
if (((a%4==0)&&(a%100!=0))||(a%400==0))
{
	
if(b<3)
{
	d=sum+c;
}
else
{
    d=sum+1+c;
}
}
else
{
	d=sum+c;
}
printf("%d",d);
 return 0;
}

