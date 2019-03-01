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
	char string[100];
	char *p;
	int len;
	int i;
	gets(string);
	len=strlen(string);
	for(p=string;p<string+len-1;p++)
	{
		i=*p+*(p+1);
		printf("%c",i);
	}
	if(p==string+len-1)
	{
		i=*p+*(p-len+1);
		printf("%c",i);
	}
	printf("\n");
}