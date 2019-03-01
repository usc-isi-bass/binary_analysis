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
	char str[101],*p=str,*ps=str;
	gets(str);
	for(;p<str+strlen(str)-1;p++)
	{
		printf("%c",*p+*(p+1));
	}
	printf("%c",*p+*ps);
	return 0;
}

