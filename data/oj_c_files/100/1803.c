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
	char s[300];
	int a[26],b[26];
	int i,f=0;
	scanf("%s",s);
	for(i=0;i<26;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(i=0;s[i]!='\0';i++)
	{
		if('a'<=s[i]&&s[i]<='z')
		{   f=1;
			a[s[i]-'a']++;
		}
		if('A'<=s[i]&&s[i]<='Z')
		{   f=1;
			b[s[i]-'A']++;
		}
	}
	if(f==1)
	{
	for(i=0;i<26;i++)
	{   if(b[i]!=0)
		printf("%c=%d\n",'A'+i,b[i]);
	}
	for(i=0;i<26;i++)
	{   if(a[i]!=0)
		printf("%c=%d\n",'a'+i,a[i]);
	}
	}
	else
		printf("No");
	return 0;
}

