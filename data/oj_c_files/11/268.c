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
	int year,month,day,i,j,sum;
    int a[12]={0,31,29,31,30,31,30,31,31,30,31,30};
	int b[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	for(j=0;j<5;j++)
	{
	sum=0;
	scanf("%d%d%d",&year,&month,&day);
    if (year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{   
				for(i=0;i<month;i++)
                   sum=sum+a[i];
			    sum=sum+day;
			}
			else
			{
                for(i=0;i<month;i++)
                   sum=sum+b[i];
			    sum=sum+day;
			}
		}
		else
		{
           for(i=0;i<month;i++)
                   sum=sum+a[i];
			    sum=sum+day;
		}
	}
	else
	{
            for(i=0;i<month;i++)
				sum=sum+b[i];
			sum=sum+day;
	}	
	printf("%d\n",sum);
	}
	return 0;
}