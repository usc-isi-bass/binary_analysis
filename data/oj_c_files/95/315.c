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
	char a[81];
	char b[81];
	int c,d,i;
	gets(a);
	gets(b);
	c=strlen(a);
	d=strlen(b);
	for(i=0;i<c;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
	}
	for(i=0;i<d;i++)
	{
		if(b[i]>='a'&&b[i]<='z')
			b[i]=b[i]-32;
	}
	if(strcmp(a,b)==1)
		printf(">");
	else if(strcmp(a,b)==-1)
		printf("<");
	else printf("=");
	
	return 0;
}

