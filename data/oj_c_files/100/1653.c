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
	char s[1000];
	int letterN[52]={0};
	scanf("%s",s);
	int len=strlen(s);
	int i,exist=0;
	for (i=0; i<len; i++)
	{
		if (s[i]>=65&&s[i]<=90)
		{
			if (exist==0) exist=1;
			letterN[s[i]-65]++;
		}
		else if (s[i]>=97&&s[i]<=122)
		{
			if (exist==0) exist=1;
			letterN[s[i]-71]++;
		}
	}

	if (exist==0) printf("No\n");
	else 
	{
		for (i=0; i<26; i++)	if (letterN[i]>0) printf("%c=%d\n",i+65,letterN[i]);
		for (i=26; i<52; i++)	if (letterN[i]>0) printf("%c=%d\n",i+71,letterN[i]);
	}

	return 0;
}
