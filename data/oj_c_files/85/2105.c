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
    int n;
	char str[500];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%s", str);
		if ((str[0] < 'a' || str[0] > 'z') && (str[0] < 'A' || str[0] > 'Z') && (str[0] != '_'))
		{
			printf("no\n");
			continue;
		}
		else if(strlen(str) == 1)
		{
			printf("yes\n");
		}
		else
		{
			int len = strlen(str);
			int j;
			for (j = 1; j < len; j++)
			{
				if ((str[j] < 'a' || str[j] > 'z') && (str[j] < 'A' || str[j] > 'Z') && (str[j] != '_') && (str[j] < '0' || str[j] > '9'))
					break;
			}
			if (j == len)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}
