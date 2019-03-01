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
	char a[200]={0};
	gets(a);
	printf("%c",a[0]);
	int i;
	for(i=1;i<strlen(a);i++)
	{
		if ( a[i] == ' ' && a[i-1] != ' ')
		{
			printf(" ");
		}
		else if (a[i]!=' ')
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}

