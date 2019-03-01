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
	int n;
	cin>>n;
	int month[201][3];
	int day1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int day2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>month[i][j];
		}
	}
	int sum1;
	int sum2;
	for(i=0;i<n;i++)
	{
		if((month[i][0]%400==0)||((month[i][0]%4==0)&&(month[i][0]%100!=0)))
		{
			sum1=0;
			sum2=0;
			for(j=0;j<month[i][1]-1;j++)
			{
				sum1=sum1+day2[j];
			}
			for(j=0;j<month[i][2]-1;j++)
			{
				sum2=sum2+day2[j];
			}
			if((abs(sum2-sum1))%7==0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			sum1=0;
			sum2=0;
			for(j=0;j<month[i][1]-1;j++)
			{
				sum1=sum1+day1[j];
			}
			for(j=0;j<month[i][2]-1;j++)
			{
				sum2=sum2+day1[j];
			}
			if((abs(sum2-sum1))%7==0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}