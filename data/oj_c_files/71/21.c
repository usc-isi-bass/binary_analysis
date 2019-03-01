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
	int n,i,x,j,k,p,s=0;
	int month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=0;
		scanf("%d %d %d",&x,&j,&k);
		if(x%4==0&&x%100!=0||x%400==0)
		{
			if(j<k)
			{
               for(p=j;p<k;p++)
			   {
				   s+=month2[p];
			   }
			   if(s%7==0)
			   {
				   printf("YES\n");
			   }
			   else
			   {
				   printf("NO\n");
			   }
			}
			else if(j>k)
			{
               for(p=k;p<j;p++)
			   {
				   s+=month2[p];
			   }
			   if(s%7==0)
			   {
				   printf("YES\n");
			   }
			   else
			   {
				   printf("NO\n");
			   }
			}
		}
		else
		{
           if(j<k)
		   {  
               for(p=j;p<k;p++)
			   {
				   s+=month1[p];
			   }
			   if(s%7==0)
			   {
				   printf("YES\n");
			   }
			   else
			   {
				   printf("NO\n");
			   }
			}
			else if(j>k)
			{
               for(p=k;p<j;p++)
			   {
				   s+=month1[p];
			   }
			   if(s%7==0)
			   {
				   printf("YES\n");
			   }
			   else
			   {
				   printf("NO\n");
			   }
			}
		}
	}
	return 0;
}