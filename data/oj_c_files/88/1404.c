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
	char c[31];
    char *p;
	gets(c);
	int i,k=strlen(c);
    for(p=c;p<=c+k-1;p++)
	{
		if(*p<'0'||*p>'9')continue;
		else
		{
			printf("%c",*p);
			if(p<=c+k-2)
			{
				if(*(p+1)<'0'||*(p+1)>'9')printf("\n");
			}
			else printf("\n");
		}
	}
	return 0;
}
