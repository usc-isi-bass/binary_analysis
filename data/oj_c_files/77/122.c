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
	char s[100],a,b;
	int slen,i,j;
	scanf("%s",s);
	slen=strlen(s);
	a=s[0];
	for(i=0;i<slen;i++)
	{
		if(s[i]!=s[0])
		{
			b=s[i];
			break;
		}
	}
	for(i=0;i<slen;i++)
	{
		if(s[i]==b)
		{
			for(j=i-1;j>=0;j--)
			{
				if(s[j]==a)
				{
					printf("%d %d\n",j,i);
					s[j]=0;
					break;
				}
			}
		}
	}
	return 0;
}