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

void convert(char *);
int main()
{
	char str1[85],str2[85];
	int result;
	gets(str1);
	gets(str2);
	convert(str1);
	convert(str2);
	result=strcmp(str1,str2);
	if(result==0)
		putchar('=');
	else
		if(result>0)
			putchar('>');
		else
			putchar('<');
	return 0;
}
void convert(char *p)
{
	while(*p)
	{
		if(*p>='A'&&*p<='Z')
			*p+=32;
		p++;
	}
}

