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
	char s[6];
	while(scanf("%s",s) != EOF)
	{
		int len = strlen(s);
		for(int i = len - 1;i >= 0;i--)
		{
			printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}