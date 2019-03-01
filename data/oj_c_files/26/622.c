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
	char a[101];
	int b[101];
	int lenth,i;
	char c=' ';
	gets(a);
	lenth=strlen(a);
	for(i=0;i<lenth;i++)
	{
		b[i]=1;
	}
	for(i=0;i<lenth;i++)
	{
		if(a[i]==c&&a[i-1]==c)
			b[i]=0;
	}
	for(i=0;i<lenth;i++)
	{
		if(b[i]==1)
			printf("%c",a[i]);
	}
	return 0;
}
