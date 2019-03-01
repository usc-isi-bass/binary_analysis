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

main()
{
	char str1[305];
	int i,j,p=0,n;
	int a[52]={0};
	scanf("%s",str1);
	n=strlen(str1);
	for(i=0;i<=n-1;i++)
	{
		for(j='A';j<='Z';j++)
		{
			if(str1[i]==j)
			{
				a[j-'A']=a[j-'A']+1;
				p++;
			}
		}
	}
	for(i=0;i<=n-1;i++)
	{
		for(j='a';j<='z';j++)
		{
			if(str1[i]==j)
			{
				a[j+26-'a']++;
				p++;
			}
		}
	}
	for(i=0;i<=51;i++)
	{
		if(p==0)
		{
			printf("No\n");
			break;
		}
		else
		{
			if(a[i]!=0&&i<=25&&i>=0)
			{
				printf("%c=%d\n",i+'A',a[i]);
			}
			else
			{
				if(a[i]!=0&&i<=51&&i>=26)
				{
					printf("%c=%d\n",(i-26+'a'),a[i]);
				}
				else
				{
					if(a[i]==0)
					{
						continue;
					}
				}
			}
		}
	}
}