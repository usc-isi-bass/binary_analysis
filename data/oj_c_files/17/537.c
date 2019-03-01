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
	char line[101];
	int length, i, j;
	while (cin.getline(line, 101))
	{
		length = strlen(line);
		for (i = 0; i < length; i++)
			cout << line[i];
		cout << endl;
		for (i = 0; i < length; i++)
		{
			if (line[i] == ')')
			{
				for (j = i; j >= 0; j--)
				{
					if (line[j] == '(')
					{
						line[i] = 0;
						line[j] = 0;
						break;
					}
				}
			}
		}
		for (i = 0; i < length; i++)
		{
			if (line[i] == '(')
				cout << "$";
			if (line[i] != '(' && line[i] != ')')
				cout << " ";
			if (line[i] == ')')
				cout << "?";
		}
		cout << endl;
	}
	return 0;
}