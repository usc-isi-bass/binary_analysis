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
	char s[101],c,*p;
	int len,i,asc1,asc2;
	gets(s);
	len=strlen(s);

	p=&s[0];

	for(i=0;i<len-1;i++)
	{
		asc1=*(p++);
		asc2=*p;
		c=asc1+asc2;
		printf("%c",c);
	}

	asc1=s[len-1];
	asc2=s[0];
	c=asc1+asc2;
	printf("%c",c);

	return 0;
}

