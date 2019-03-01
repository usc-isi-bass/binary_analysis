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
	char c;
	while (c != '\n')
	{
		scanf("%c",&c);
		if(c >= '0' && c <= '9')
			printf("%c",c);
		else
			printf("\n");	
	}
	return 0;
}