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
	int a[100];
	int i=1;
	int b,r;
	
	scanf("%d",&b);
	char d[100];
	gets(d);
	do
	{
		char c[100];
		gets(c);
		r=strlen(c);
	    int t=0;
		int m=0;
		do
		{
			if(c[t]=='_')
			{t++;}
			else
			{
				if(c[t]>=65&&c[t]<=90)
				{t++;}
				else
				{
					if(c[t]>=97&&c[t]<=122)
					{t++;}
					else
					{
						if(c[t]>=48&&c[t]<=57)
						{t++;}
						else
						{t++;m=m+1;}
					}
				}	
			}	
		}while(t<=(r-1));
		if(m==0)
		{
			if(c[0]=='_')
			{a[i]=1;i++;}
			else
			{
				if(c[0]>=65&&c[0]<=90)
				{a[i]=1;i++;}
				else
				{
					if(c[0]>=97&&c[0]<=122)
					{a[i]=1;i++;}
					else
					{a[i]=0;i++;}
				}
			}
		}
		else
		{a[i]=0,i++;}
	}while(i<=b);
	int e=1;
	do
	{
		printf("%d\n",a[e]);
		e++;
	}while(e<=b);
	scanf("%d",&e);
	return 0;
}