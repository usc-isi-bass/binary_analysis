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
	int t;scanf("%d",&t);
	int i;char a[100000];
	for(i=0;i<t;i++)
	{
		scanf("%s",a);
		int zimu[26]={0};
		int k,len;int cache;
		len=strlen(a);
		for(k=0;k<len;k++)
		{
			cache=a[k]-'a';
			zimu[cache]=zimu[cache]+1;
		}
		for(k=0;k<len;k++)
		{
			if(zimu[a[k]-'a']==1)
			{
				printf("%c\n",a[k]);
				break;
			}
		}
		if(k==len)
		{printf("no\n");
		}
	}
	return 0;
}
