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
	int n,i,j,t=0,b;
	char s[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		b = 0;
		scanf("%s",s);
		if(isalpha(s[0])==0&&s[0]!='_')
			b=1;
		else
		{
			for(j=0;j<strlen(s);j++)
			{
				if (isalnum(s[j])==0&&s[j]!='_')
			//	if(ispunct(s[j])!=0||s[j]!='_')
				{
					b = 1;
					break;
				}
			}
		}
		if(b==0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}