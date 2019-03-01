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
	char s[50];
	char w[50];
	cin >> s >> w;
	for (int i = 0 ; ; i++)
	{
		for (int j = 0 ;;j++)
		{
			if (s[j] == 0)
			{
				cout << i;
				return 0;
			}
			else if (s[j] != w[i + j])
				break;
		}
	}
}