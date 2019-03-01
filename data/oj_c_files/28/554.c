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

int main ()
{
	char s[10000];
	gets(s);
	int i,count;
	count=0;
	i=0;
	while(s[i]!=' '&&s[i]!='\0')
	{
		i++;
		count++;
	}
	printf("%d",count);
	while(s[i]!='\0'&&s[i]!='\0')
	{
		if(s[i]!=' ')
		{
			count=0;
		    while(s[i]!=' '&&s[i]!='\0')
			{
			   count++;
			   i++;
			}
			printf(",%d",count);
		}
		else
		{
			i++;
		}
	}
	return 0;
}
