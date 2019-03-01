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

int main(int argc, char* argv[])
{
	char s[80],s1[80];
	gets(s);
	gets(s1);
	char*p;
	char*l;
	for(p=s;*p!='\0';p++)
	{
		if(*p>=65&&*p<=90)
		{
			*p=*p+32;
		}
	}
	for(l=s1;*l!='\0';l++)
	{
		if(*l>=65&&*l<=90)
		{
			*l=*l+32;
		}
	}
	int cmp;
	cmp=strcmp(s,s1);
	if(cmp<0)
	{
		printf("<");
	}
	else if(cmp==0)
	{
		printf("=");
	}
	else if(cmp>0)
	{
		printf(">");
	}
	return 0;
}