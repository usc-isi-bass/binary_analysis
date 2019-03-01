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
	char s[30];
	gets(s);
	char *a;
	for(a=s;*a!='\0';a++)
	{
		if(*a>='0'&&*a<='9')
		{
			printf("%c",*a);
		}
		else
		{
			if(a==s)
			{
				continue;
			}
			else
			{
				if(*(a-1)>='0'&&*(a-1)<='9')
				{
					printf("\n");
				}
			}
		}
	}
	printf("\n");
	return 0;
}