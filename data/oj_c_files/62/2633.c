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
	char str[300];
	int i;
	char c;
	gets(str);
	for(i=0;(c=str[i])!='\0';i++)
	{
		if((c=str[i])==32)
		{
			if((c=str[i-1])==32)
				continue;
		}
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}