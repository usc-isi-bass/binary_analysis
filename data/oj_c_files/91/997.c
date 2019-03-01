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
	char s[101],s1[101]="\0";
	char *p=s,*pp=s1;
	gets(s);
	for(;*p!='\0';p++,pp++)
	{
		if(*(p+1)!='\0') *pp=*p+*(p+1);
		else *pp=*p+s[0];
	}
	puts(s1);
}