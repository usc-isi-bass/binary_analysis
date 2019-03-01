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
	char *string;
	string=(char *)malloc(101);
	gets(string);
	char *p=string;
	int len=strlen(string);
	int i;
	for(i=0;i<len-1;i++)
	{
		printf("%c",*p+*(p+1));
		p++;
	}
	printf("%c",*p+*string);
	return 0;
}
