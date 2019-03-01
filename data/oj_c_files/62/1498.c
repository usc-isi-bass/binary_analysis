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
	char *p,str[1000];
	p=str;
	gets(p);
	for(;*p!='\0';p++)
	{
		if(*p!=' ')
			printf("%c",*p);
		else if((*p==' ')&&(*(p+1)!=' '))
			printf("%c",*p);
	}
}