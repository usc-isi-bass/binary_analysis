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
	int i,j,len;
	char a[101],*pa;
	gets(a);
	pa=&a[0];
	len=strlen(a);
	i=0;
	for(i=0;i<len-1;i++)
	{
		printf("%c",*(pa+i)+*(pa+i+1));
	}
	printf("%c",*(pa)+*(pa+len-1));
	return 0;
}
