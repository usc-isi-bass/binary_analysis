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
	int som;
	char a[105];
	char b[105];
	int len;
	int i,j;
	scanf("%d", &n);
	for (som = 1; som <= n; som++){
		scanf("%s", a);
		strcpy(b, a);
		len = strlen(a);
		for (i = len-1; i >=0; i--)
		{
			if (b[i] == '(')
				b[i] = '$';
			else if (b[i] == ')')
				b[i] = '?';
			else
				b[i] = ' ';
		}
		for (i = len - 1; i >= 0; i--)
		{
			if (b[i] == '$')
			{
				for (j = i + 1; j < len; j++)
				{
					if (b[j] == '?')
					{
						b[i] = ' ';
						b[j] = ' ';
						break;
					}
				}
			}
		}
		printf("%s\n%s\n", a, b);
	}
}