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
	int a[2][3];
	int i,j,n,k;
	n=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(a[0][0]!=a[1][0])
	{
	for(i=a[0][0];i<=a[1][0];i++)
	{
		if(i==a[0][0])
		{
			for(j=a[0][1];j<=12;j++)
			{
				if(j==a[0][1])
				{
					if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						n+=31-a[0][2];
					else if(j==2)
					{
						if(i%4==0&&i%100!=0||i%400==0)
							n+=29-a[0][2];
						else
							n+=28-a[0][2];
					}
					else
						n+=30-a[0][2];
				}
				else
				{
					if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						n+=31;
					else if(j==2)
					{
						if(i%4==0&&i%100!=0||i%400==0)
						n+=29;
						else
							n+=28;
					}
					else
						n+=30;
				}
			}
		}
		else if(i==a[1][0])
		{
			if(i%4==0&&i%100!=0||i%400==0)
					n+=366;
				else
					n+=365;
			for(j=12;j>=a[1][1];j--)
			{
				if(j!=a[1][1])
				{
					if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						n-=31;
					else if(j==2)
					{
						if(i%4==0&&i%100!=0||i%400==0)
							n-=29;
						else
							n-=28;
					}
					else
						n-=30;
				}
				else
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						n-=31-a[1][2];
					else if(j==2)
					{
						if(i%4==0&&i%100!=0||i%400==0)
							n=n-29+a[1][2];
						else
							n=n-28+a[1][2];
					}
					else
						n=n-30+a[1][2];
			}
		}
		else
		{
			if(i%4==0&&i%100!=0||i%400==0)
				n+=366;
			else
				n+=365;
		}
	}
	}
	else if(a[0][1]==a[1][1])
		n+=(a[1][2]-a[0][2]);
	else
		for(j=a[0][1];j<=a[1][1];j++)
		{
			if(j==a[0][1])
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						n+=31-a[0][2];
					else if(j==2)
					{
						if(i%4==0&&i%100!=0||i%400==0)
							n+=29-a[0][2];
						else
							n+=28-a[0][2];
					}
					else
						n+=30-a[0][2];
			}
			else if(j==a[1][1])
				n+=a[1][2];
			else
				{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						n+=31;
					else if(j==2)
					{
						if(i%4==0&&i%100!=0||i%400==0)
							n+=29;
						else
							n+=28;
					}
					else
						n+=30;
			}
		}
	printf("\n%d",n);
	return 0;
}