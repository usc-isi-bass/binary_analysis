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
	int m,i,j,l,t,f[320],sum[320];
	char string[320],strl[320];
	for(i=0;i<320;i++)
	{
    	f[i]=0;
    	sum[i]=0;
	}
	gets(string);
	l=strlen(string);
	m=0;
	for(i=0;i<l;i++)
	{
		if(string[i]>96 && string[i]<123)
		{
			strl[m]=string[i];
			m++;
		}
	}
	if(m==0)
		printf("No");
	else
	{
		for(i=m-1;i>=0;i--)
		{
			for(j=0;j<m-1;j++)
			{
				if(strl[j]>strl[j+1])
				{
					char c;
					c=strl[j];
					strl[j]=strl[j+1];
					strl[j+1]=c;
				}
			}
		}
		for(j=0;j<m;j++)
		{
			if(f[j]!=1)
			{
				sum[strl[j]]=1;
				for(t=1;t<m-j;t++)
				{
					if(strl[j]==strl[j+t])
					{
						sum[strl[j]]++;
						f[j+t]=1;
					}
				}
			}
		}
		for(j=0;j<m;j++)
		{
			if(f[j]!=1)
			{
				printf("\n%c=%d",strl[j],sum[strl[j]]);
			}
		}
	}
	return 0;
}