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
	int sy,sm,sd,ey,em,ed,i,sum=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&sy,&sm,&sd);
	scanf("%d %d %d",&ey,&em,&ed);
    for(i=sy;i<=ey;i++)
	{
		sum=sum+365;
		if((i%4==0&&i%100!=0)||(i%400==0))
			sum=sum+1;
	}
	for(i=1;i<=sm-1;i++)
	{   if(sm!=1)
	{
		if((sy%4==0&&sy%100!=0)||(sy%400==0))
		sum=sum-b[i];
	    else sum=sum-a[i];}
	}
	for(i=em;i<=12;i++)
	{
		
		
        if((ey%4==0&&ey%100!=0)||(ey%400==0))
		sum=sum-b[i];
		else sum=sum-a[i];}
	
	sum=sum+ed-sd;
	printf("%d",sum);
}
