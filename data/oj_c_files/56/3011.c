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
	char *str;
	str=(char*)malloc(5*sizeof(char));
	char*p;
	p=str;
	gets(str);
	for(p=str+strlen(str)-1;p>=str;p--)
		printf("%c",*p);

}