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
	int i;
	char c[31];
	gets(c);
    char *p=c;
	for(i=0;c[i]!='\0';i++,p++)
		{if(*p>='0'&&*p<='9')
			printf("%c",*p);
		else 
		{ if(*(p+1)>='0'&&*(p+1)<='9')
			printf("\n");
	}
	}
	
}