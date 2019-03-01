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
	char a[200];
	gets(a);
	printf("%c",a[0]);
	for(int i=1;i<strlen(a);i++)
	{
		if(a[i-1]!=' ' && a[i]!=' ')
		{	printf("%c",a[i]);
		continue;
		}
		else if(a[i-1]==' ' && a[i]!=' ')
			printf(" %c",a[i]);
	}

	return 0;
}
