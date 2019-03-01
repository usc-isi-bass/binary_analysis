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
	char *p;
	p=(char *)malloc(sizeof(char)*8);
	int i;
	for(i=0;i<6;i++)
	{
		scanf("%c", p);
		if(*p=='\n')
		{
			*p=0;
			break;
		}
		p++;
	}
	for(i=i-1;i>=0;i--)
	{
		p--;
		printf("%c", *p);
	}
	return 0;
}