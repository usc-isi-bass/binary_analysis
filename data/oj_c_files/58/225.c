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
	char a[100],*p;
	int n,b[100][1],*pr,len;
	scanf("%d",&n);
	gets(a);
	for(pr=*b;pr<*(b+n);pr++)
	{
		*pr='0';
		gets(a);
		len=strlen(a);
		if((*a>'z'||*a<'A')&&*a!='_')
		{
			continue;
		}
		*pr='1';
		for(p=a;p<a+len;p++)
		{
			if(((*p<'A'&&*p>'9')||*p>'z'||*p<'0')&&*p!='_')
			{
				*pr='0';
				break;
			}
		}
	}
	for(pr=*b;pr<*(b+n);pr++)
	{
		printf("%c\n",*pr);
	}
	return 0;
}
		