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

void main()
{
	char s[101],*p;
	gets(s);
	p=s;
	while(*p!='\0')
	{
		if(*p!=' ')
		{
			printf("%c",*p);
			p++;             //
		}
		if(*p==' ')
		{
			printf(" ");
			do{p++;}while(*p==' ');
		}
	}

}



		
		
	