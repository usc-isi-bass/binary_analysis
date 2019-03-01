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
	char f(char x);
	int n, i, j;
	char s[256];
	scanf("%d\n", &n);
	for(i=0; i<n; i++)
	{
		gets(s);
		for(j=0; s[j]!='\0'; j++)
			s[j]=f(s[j]);
		s[j]='\0';
		puts(s);
	}
}
char f(char x)
{
	switch(x)
	{
	case 'A': return 'T'; break;
	case 'T': return 'A'; break;
	case 'C': return 'G'; break;
	case 'G': return 'C'; break;
	}
}