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
	int n,a,b,c,i,j;
	int e[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int f[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int d=0;
		scanf("\n%d%d%d",&a,&b,&c);
		if((a%100!=0&&a%4==0)||(a%100==0&&a%400==0))
		{
			if(b>c)
			{
				for(j=c;j<b;j++)
				{
					d+=e[j-1];
				}
			}
			else if(c>b)
			{
				for(j=b;j<c;j++)
				{
					d+=e[j-1];
				}
				
			}
			if(d%7==0)
			{printf("\nYES");}
			else
			{printf("\nNO");}
		}
		else
		{
			if(b>c)
			{
				for(j=c;j<b;j++)
				{
					d+=f[j-1];
				}
			}
			else if(c>b)
			{
				for(j=b;j<c;j++)
				{
					d+=f[j-1];
				}
				
			}
			if(d%7==0)
			{printf("\nYES");}
			else
			{printf("\nNO");}
		}
	}
	return 0;    
}