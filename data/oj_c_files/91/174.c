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
	char *p;
	char c;
	int i;
	p=(char *)malloc(100*sizeof(char));
	gets(p);
	c=*p;
	for (i=0;i<(strlen(p)-1);i++)
		*(p+i)=*(p+i)+*(p+i+1);
	*(p+strlen(p)-1)=*(p+strlen(p)-1)+c;
	for (i=0;i<strlen(p);i++)
		printf("%c",*(p+i));
	return 0;
}