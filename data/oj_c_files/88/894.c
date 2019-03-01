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
	char a[35];
	gets(a);
	char* end=a+strlen(a);
	for (char *i=a;i<end;i++)
	{
		if (*i>='0' && *i<='9')
		{
			printf("%c",*i);
		}
		else
		{
			while (!(*i>='0' && *i<='9'))
			{
				i++;
			}
			i--;
			printf("\n");
		}
	}
	return 0;
}