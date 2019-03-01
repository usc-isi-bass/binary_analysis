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
	int i, l, n = 1;
	char str[1001];
	
	gets(str);
	l = strlen(str);
	if(l == 1)
		printf("(%c,%d)", str[0] % 32 + 64, 1);
	else
		for(i = 1; i < l; i++)
		{
			if((str[i] % 32) == (str[i - 1] % 32))
				n++;
			else
			{
				printf("(%c,%d)", str[i - 1] % 32 + 64, n);
				n = 1;
			}
			if(i == l - 1)
				printf("(%c,%d)", str[i] % 32 + 64, n);
		}
	return 0;
}