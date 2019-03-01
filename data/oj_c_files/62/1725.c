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
	int i;
	char c[300];
	gets(c);
	i=0;
	while (c[i]!=0)
	{
		if ((c[i]==' ')&&(c[i+1]==' '))
		{
			i++;
		}
		else
		{
			printf("%c",c[i]);
			i++;
		}
	}
	return 0;
}
