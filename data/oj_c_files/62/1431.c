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
	char *s;
	s=(char*)calloc(100000,sizeof(char));
	gets(s);
	for(;*s!='\0';s++)
	   if((*s!=' ')||((*s==' ')&&(*(s-1)!=' ')))
	     printf("%c",*s);
    printf("\n");
}