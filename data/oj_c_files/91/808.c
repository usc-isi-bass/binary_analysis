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
	char *s,*c;
	s=(char *)malloc(sizeof(char)*105);
	c=(char *)malloc(sizeof(char)*105);
	gets(s);
	for(i=0;*(s+i+1)!='\0';i++)
	{
		*(c+i)=*(s+i)+*(s+i+1);
	}
	*(c+i)=*(s+i)+*s;
	*(c+i+1)='\0';
	puts(c);
}
