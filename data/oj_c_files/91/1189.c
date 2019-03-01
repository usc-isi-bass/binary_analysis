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

void friends(char c[100],int l);
void main()
{
	char c[100];
	gets(c);
	int l=strlen(c);
	friends(c,l);
}

void friends(char c[100],int l)
{
	int i;
	char p[100];
	for(i=0;i<l-1;i++)
		p[i]=c[i]+c[i+1];
	p[l-1]=c[l-1]+c[0];
	p[l]='\0';
	puts(p);
}