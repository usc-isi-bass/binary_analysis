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
	int i = 0, j, k;
	int conuter = 0;
	int length[300] = {0};
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '\n')
		{
			length[i] = conuter;
			break;
		}
		else
		{
			if (ch == ' ')
			{
				length[i] = conuter;
				conuter = 0;
				if (length[i] != 0)
				{
					i++;
				}
			}
			else
			{
				conuter++;
			}
		}
	}
	for (j = 0; j < i; j++)
	{
		printf("%d,", length[j]);
	}
	printf("%d", length[j]);
	return 0;
}