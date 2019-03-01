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

void main()
{
	int n,i,num[500]={0},max=0,l,j,k;
	char c[501],str[500][6],str2[500][6];
	scanf("%d",&n);
	scanf("%s",c);
	l=strlen(c);
	for(i=0;i<=l-n;i++)
	{
		j=0;
		for(k=i;k<=i+n-1;k++)
		{
			str[i][j]=str2[i][j]=c[k];
			j++;
		}
		str[i][j]=str2[i][j]='\0';
	}
	for(i=0;i<=l-n;i++)
	{
		if(str[i][0]!='\0')
		{
			for(k=i;k<=l-n;k++)
			{
				if(str[k][0]!='\0')
				{
					if(strcmp(str2[i],str[k])==0)
					{
						num[i]=num[i]+1;
						str[k][0]='\0';
					}
				}
			}
		}
	}
	for(i=0;i<=l-n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	if(max<=1)
	{
		printf("NO\n");
	}
	else
	{
		printf("%d\n",max);
		for(i=0;i<=l-n;i++)
		{
			if(num[i]==max)
			{
				printf("%s\n",str2[i]);
			}
		}
	}
}
