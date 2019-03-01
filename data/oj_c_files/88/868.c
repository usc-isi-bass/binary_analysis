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
	char* string=(char*)malloc(30);
	gets(string);
	char *p=string;
	int len=strlen(string);
	for(;p<string+len;p++)
	{
	    int anynumber=0;
		while(*p>='0'&&*p<='9')
	    {
		printf("%c",*p);
		p++;
		anynumber++;
	    }
		if(anynumber)
		{
			printf("\n");
		}
	}
}