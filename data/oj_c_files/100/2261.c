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
	char s[301];
	int a[52]={0,0};
	gets(s);
	int i,k=0,len=strlen(s);
	char x;
	for(x='a';x<='z';x=x+1)
	{
		for(i=0;i<=len-1;i++)
		{
			if(s[i]==x) a[x-'a']++;
		}
	}
    for(x='A';x<='Z';x=x+1)
	{
		for(i=0;i<=len-1;i++)
		{
			if(s[i]==x) a[x-'A'+26]++;
		}
	}
		for(i=26;i<=51;i++)
	{
		if(a[i]!=0) {k++;printf("%c=%d\n",'A'+i-26,a[i]);}
	}
	for(i=0;i<=25;i++)
	{
		if(a[i]!=0) {k++;printf("%c=%d\n",'a'+i,a[i]);}
	}

	if(k==0)
	printf("No\n");
}
