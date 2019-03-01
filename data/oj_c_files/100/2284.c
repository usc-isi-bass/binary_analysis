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
	char c[300];
	int a[52]={0},i,j,k=0;
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		for(j='A';j<='Z';j++)
		{
			if(c[i]==j)
			{
				a[j-'A']++;
				break;
			}
		}
	}
	for(i=0;c[i]!='\0';i++)
	{
		for(j='a';j<='z';j++)
		{
			if(c[i]==j)
			{
				a[j-'a'+26]++;
				break;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",i+'A',a[i]);
			k++;
		}
	}
	for(i=26;i<52;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",i+'a'-26,a[i]);
			k++;
		}
	}
	if(k==0)
		printf("No\n");
	return 0;
}