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
	char ch;
	int len = 0;
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ' && len)
		{
			printf("%d", len);
			len = 0;
			break;
		}
		else if(ch != ' ')
			len++;
	}
	if(ch == '\n')
	{
		printf("%d\n", len);
		return 0;
	}
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ' && len)
		{
			printf(",%d", len);
			len = 0;
		}
		else if(ch != ' ')
			len++;
	}
	if(len) printf(",%d\n", len);
	else printf("\n");
	return 0;
}