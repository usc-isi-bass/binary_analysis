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
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m1,m2,n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int sum=0;
		scanf("%d%d%d",&y,&m1,&m2);
		if((y%100!=0&&y%4==0)||(y%400==0))
		{
			m[2]=29;
			if(m1<m2)
			{
				for(j=m1;j<m2;j++)
				{
					sum=sum+m[j];
				}
				if(sum%7==0)
				{
					printf("YES\n");
				}
				else if(sum%7!=0)
				{
					printf("NO\n");
				}
			}
			else if(m1>m2)
			{
				for(j=m2;j<m1;j++)
				{
					sum=sum+m[j];
				}
				if(sum%7==0)
				{
					printf("YES\n");
				}
				else if(sum%7!=0)
				{
					printf("NO\n");
				}
			}
			else if(m1==m2)
			{
				printf("YES");
			}
		}
		else 
		{
			m[2]=28;
			if(m1<m2)
			{
				for(j=m1;j<m2;j++)
				{
					sum=sum+m[j];
				}
				if(sum%7==0)
				{
					printf("YES\n");
				}
				else if(sum%7!=0)
				{
					printf("NO\n");
				}
			}
			else if(m1>m2)
			{
				for(j=m2;j<m1;j++)
				{
					sum=sum+m[j];
				}
				if(sum%7==0)
				{
					printf("YES\n");
				}
				else if(sum%7!=0)
				{
					printf("NO\n");
				}
			}
			else if(m1==m2)
			{
				printf("YES");
			}
		}
	}
	return 0;
}