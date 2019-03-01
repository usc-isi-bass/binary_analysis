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
	char s[102]="",*p,i,c;
	int x;
	gets(s);
	x=strlen(s);
	c=s[0];
	p=s;
	for(i=0;i<x-1;i++,p++)
	{
		*(p)=*(p)+*(p+1);
	}
    s[x-1]=s[x-1]+c;
	printf("%s",s);
	return 0;
}