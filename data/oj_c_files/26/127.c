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
	char a[100], i;
	gets(a);
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]!=' ')
		{
			if(a[i-1]==' ')
				printf(" %c", a[i]);
			else
				printf("%c", a[i]);
		}
	}
	printf("\n");
}