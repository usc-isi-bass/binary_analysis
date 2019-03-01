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
	char book[1000][20]={'\0'},name[1000][30]={'\0'};
	int length,n,i,j,number[30]={0},memory,largest,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",book[i],name[i]);
	}
	for(i=0;i<n;i++)
	{
		length=strlen(name[i]);
		for(j=0;j<length;j++)
		{
			temp=name[i][j]-'A';
			number[temp]+=1;
		}
	}
	largest=0;
	for(i=0;i<26;i++)
	{
		if(number[i]>largest)
		{
			largest=number[i];
			memory=i;
		}
	}
	printf("%c\n%d\n",'A'+memory,number[memory]);
	for(i=0;i<n;i++)
	{
		length=strlen(name[i]);
		for(j=0;j<length;j++)
		{
			if(name[i][j]=='A'+memory)
			{
				printf("%s\n",book[i]);
			}
		}
	}
	return 0;
}