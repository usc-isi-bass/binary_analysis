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
	char s[number];
	int i, n, x;
    gets(s);
	for(i=0;i<255;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			for(n=i;n<255;n++)
				s[n]=s[n+1];
			i=i-1;
		}
	}
	puts(s);
	return 0;
} 