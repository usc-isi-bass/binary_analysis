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
	char str[100000];
	int a[26]={0},i,j,n,len,flag=1,symbol=1;
	scanf("%d",&n);
	getchar();
	for(j=0;j<n;j++)
	{
		symbol=1;
		flag=1;
		gets(str);
		len=strlen(str);
		for(i=0;i<len;i++)
			a[str[i]-97]+=1;
		for(i=0;i<26;i++)
		{
			if(a[i]!=1)
				flag*=1;
			else
			{
				flag*=0;
				break;
			}
		}
		if(flag==1)
			printf("no\n");
		else
		{
			for(i=0;i<len;i++)
				if(a[str[i]-97]==1)
				{
					printf("%c\n",str[i]);
					break;
				}
		}
		for(i=0;i<26;i++)
			a[i]=0;
	}
	return 0;
}

			
