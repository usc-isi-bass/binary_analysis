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
	int n=0;
	scanf("%d",&n);
	int i=0;
	char s[40];
	int length=0;
	int len=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		len=strlen(s);
		length+=len;
		if(length<MAX)
		{
			if(length!=len)
			{
				printf(" ");
				length++;
			}
			printf(s);
		}
		else
		{
			printf("\n");
			length=len;
			printf(s);
		}
	}
	return 0;
}