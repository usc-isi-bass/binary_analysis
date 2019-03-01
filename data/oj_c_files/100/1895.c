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
	int a=0,i,sum[52]={0};
	char zifu[301];
	gets(zifu);
	for(i=0;i<strlen(zifu);i++)
	{
		if('A'-1<zifu[i]&&zifu[i]<'Z'+1)
		{
			sum[zifu[i]-'A']++;
			a=1;
		}
		if('a'-1<zifu[i]&&zifu[i]<'z'+1)
		{
			sum[zifu[i]-'a'+26]++;
			a=1;
		}
	}
	if(a==0)
	{
		printf("No");
	}
	for(i=0;i<26;i++)
	{
		if(sum[i]!=0)
		{
		printf("%c=%d\n",i+'A',sum[i]);
		}
	}
	for(i=26;i<52;i++)
	{	
		if(sum[i]!=0)
		{
			printf("%c=%d\n",i-26+'a',sum[i]);
		}
	}
	return 0;
}
