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
	int a,b,x=0,y=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{scanf("%d%d",&a,&b);
		if(a==0)
		{
			if(b==1)
			{x++;}
			else
			{
				if(b==2)
				{
					y++;
				
				}
			}
		}
		if(a==1)
		{
			if(b==0)
			{y++;}
			else
			{
				if(b==2)
				{x++;}
			}
		}
		if(a==2)
		{
			if(b==0)
			{x++;}
			else
			{if(b==1)
			{y++;}}
		}
	}
if(x>y)
printf("A");
if(x==y)
printf("Tie");
if(x<y)
printf("B");
return 0;
}