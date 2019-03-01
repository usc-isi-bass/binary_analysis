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


char sex[2];

void check(char line[], int n)
{
	int i;
	if (n == strlen(line) - 1)
	{
		cout << 0 << ' ' << n << endl;
		exit (0);
	}
	else
	{
		if (line[n] != sex[1])
			check(line, n + 1);
		else
		{
			for (i = n - 1; i >= 0; i--)
			{
				if (line[i] == sex[0])
				{
					cout << i << ' ' << n << endl;
					line[i] = ' ';
					line[n] = ' ';
					break;
				}
			}
		}
		check(line, n + 1);
	}
}

int main()
{
	char line[501];
	cin.getline(line, 501);
	sex[0] = line[0];
	sex[1] = line[strlen(line) - 1];

	check(line, 1);

	return 0;
}