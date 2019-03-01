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
	int i=0,n;
	char str[101];
	gets(str);
	n=strlen(str);
	do
	{if (str[i]==' ' && str[i-1]==' ')
		{i++;
		 continue;
		}
	 printf("%c",str[i]);
	 i++;
	}while(i<n);
	return 0;
}
