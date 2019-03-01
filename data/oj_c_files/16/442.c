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
	char s[6],t[6];
	int i,x;
	gets(s); 
	x=strlen(s); 
	for (i=0;i<=x-1;i++) t[x-1-i]=s[i];
	for (i=x;i<=5;i++) t[i]=0;
	puts(t);
}
