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
	char str[101],fri[101];
	int i;
	gets(str);

	for(i=0;i<L-1;i++)
	{
		printf("%c",str[i]+str[i+1]);
	}
	printf("%c\n",str[i]+str[0]);
	return 0;
}