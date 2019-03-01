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
	char str1[1000];
	char str2[27]="abcdefghijklmnopqrstuvwxyz";
	int sz[26];
	int i,j,exist=0;
	scanf("%s",str1);
for(i=0;i<26;i++)
{
sz[i]=0;
}
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			if(str1[i]==str2[j])
			{
				sz[j]+=1;
				exist=1;
			}
		}
	}
	if(exist==0)
	{
		printf("No");
	}
	else if(exist==1)
	{
		for(i=0;str2[i]!='\0';i++)
		{
			if(sz[i]!=0)
			{
				printf("%c=%d\n",str2[i],sz[i]);
			}
		}
	}
	return 0;
}