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
	char str[201];
	gets(str);
	char *p;
	char s[200];
	int i;
	int len=strlen(str);
	p=str;
	for (i=0;i<len-1;i++)
	{
		s[i]=*p+*(p+1);
		p++;
	}
	if (p==&str[len-1])
	{
		s[len-1]=*p+(str[0]);
	}
	p=s;
	for (i=0;i<len;i++,p++)
	{
		printf("%c",*p);
	}
	return 0;
}




