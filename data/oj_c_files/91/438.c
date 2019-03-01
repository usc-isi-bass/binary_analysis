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
	char a[102]={0};
	char temp;
	int l,i=1;
	char *p;
	gets(a);
	p=a;
	l=strlen(a);
	temp=*p;
	for(i=0;i<l-1;i++,p++)
		*p=*p+*(p+1);
	*p=*p+temp;
	p=a;
	for(i=0;i<l;i++)
		printf("%c",*(p++));
	return 0;
}