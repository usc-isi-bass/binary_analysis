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
	char s[5000],*p=s;
	int n=0;
	gets(s);
	while(*p)
	{
		if(*p==' ')
		{
			if(n!=0)
				printf("%d,",n);
			n=0;
		}
		else
			n++;
		p++;
	}
	printf("%d\n",n);
	return 0;
}