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
	char s[1000][100];
	int i=0,k;
	gets(s[0]);
	while(s[i][0]!='e')
	{
		i=i+1;
		gets(s[i]);
	}
	for(k=i-1;k>=0;k--)
	{
		puts(s[k]);
	}
}

