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
    char str[102];
	char *p;
	p=str;
	gets(str);
	int c=strlen(str);
	for(p=str;p<str+c-1;p++ )
	{
	  if(*p==' '&&*(p+1)==' ')continue;               
	  if(*p==' '&&*(p+1)!=' '){cout<<' ';continue;}
	  if(*p!=' '){cout<<*p;}

	}
	cout<<*p;
	return 0;
}