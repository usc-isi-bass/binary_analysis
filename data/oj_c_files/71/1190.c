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
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,year,month1,month2,i,j,sum,begin,end;


	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&year,&month1,&month2);


		if( (year%4==0 && year%100!=0)||(year%400==0) )
		{ 
			days[2]=29; 
		}
		else 
		{
			days[2]=28;
		}


		if (month1>month2)
		{
			begin=month2;
			end=month1;
		}
		else 
		{
			begin=month1;
			end=month2;
		}



        sum=0;
		for (j=begin;j<end;j++)
		{
			sum=sum+days[j];
		}



		if(sum%7==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}



	return 0;
}