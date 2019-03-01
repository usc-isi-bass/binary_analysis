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
	int t,i,j,k,l,num[100000];
	scanf("%d",&t);
	char a[100000];
	for(i=0;i<t;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			num[j]=1;
		}
		for(j=0;j<l-1;j++)
		{
			for(k=j+1;k<l;k++)
			{
				if(a[j]==a[k])
				{
					num[j]+=1;
					num[k]=num[j];
				}
			}
		}
		for(j=0;j<l;j++)
		{
			if(num[j]==1)
			{
				printf("%c\n",a[j]);
				break;
			}
			if(j==l-1&&num[j]!=1)
				printf("no\n");
		}
	}
}
		