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


char s[500];

int substr(char s[], int start, int end)
{
	while ((end>start)&&(s[start]==s[end]))
	{
		start++; end--;
	}
	if(end>start)
		return 0; 
	else 
		return 1; 
}

void osubstr(char s[], int start, int end)
{
	int i;
	for(i=start;i<=end;i++)
		putchar(s[i]);
	putchar('\n');
}

int main()
{
	unsigned int m,n,width;
	gets(s);
	for(width=1; width<strlen(s); width++)
	    for(m=0; m<=strlen(s)-width;m++)
		    if(substr(s, m, m+width)) 
			    osubstr(s, m, m+width);
}