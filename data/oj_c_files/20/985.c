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
	char str[10],substr[10];
	int i,max;
	while(scanf("%s%s",str,substr)!=EOF)
	{
	max=0;
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]>str[max])
			{
				max=i;
			}
		}
		for(i=0;i<=max;i++)
		{
			printf("%c",str[i]);
		}
		for(i=0;i<strlen(substr);i++)
		{
			printf("%c",substr[i]);
		}
		for(i=max+1;i<strlen(str);i++)
		{
			printf("%c",str[i]);
		}printf("\n");
	}
	return 0;
}