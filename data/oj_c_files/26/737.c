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
	char string[101];
	int i;
	gets(string);
	printf("%c",string[0]);
	for(i=1;(string[i])!='\0';i++)
	{
		if(string[i]!=' ')  printf("%c",string[i]);
		else
		{
			if(string[i-1]!=' ')   printf(" ");
		}
	}
	return 0;
}