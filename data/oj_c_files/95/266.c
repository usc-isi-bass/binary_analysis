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
	char s[80],t[80];
	int i;
	gets(s);
	gets(t);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-32;
	}
	for(i=0;t[i]!='\0';i++)
	{
		if(t[i]>='a'&&t[i]<='z')
			t[i]=t[i]-32;
	}
	if(strcmp(s,t)>0)printf(">");
	else if(strcmp(s,t)<0)printf("<");
	else printf("=");
	return 0;
}

