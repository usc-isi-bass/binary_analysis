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
	char str[101];
	int i, j;
	while (cin.getline(str, 101))
	{
		int length = strlen(str), count1[1000] = {0}, count2[1000] = {0};
		for (i = length; i >= 0; i--)
		{
			if (str[i] == '(')
			{
				for (j = i; str[j] != '\0'; j++)
				{
					if (str[j] == ')' && count2[j] == 0)
					{
						count2[j]--;
						break;
					}
					else
					{
						if (str[j + 1] == '\0')
						{
							count1[i]++;
						}
					}
				}
			}
		}
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == ')')
			{
				count2[i]++;
			}
			cout << str[i];
		}
		cout << endl;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (count1[i] == 1)
			{
				cout << "$";
			}
			if (count2[i] == 1)
			{
				cout << "?";
			}
			if (count1[i] != 1 && count2[i] != 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}