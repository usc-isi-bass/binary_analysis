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
	int i;
	char s[20];
	printf("\n");
	scanf("%d", &i);
	sprintf(s, "%d", i);
	for(i=strlen(s)-1; i>=0; i--)
	{
		printf("%c", s[i]);
	}
	puts("\n");

	return 0;
}
