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

//********************************
//*???4.cpp   **
//*?????? 1200012768 **
//*???2012.11.  **
//*???????  **
//********************************
int main()
{
	char ch[500];
	int i = 0, j, k, len, flag = 1;
	do
	{
		cin.get(ch[i]);
		if (ch[i] == '\n')
			break;
		i++;
	} while (i < 500);
	ch[i] = '\0';
	len = strlen(ch);
	for (j = 2; j <= len; j++)
	{
		for (i = 0; i <= len - j; i++)
		{
			for (k = i; k <= i + (j - 1) / 2; k++)
				if (ch[k] != ch[2 * i + j - 1 - k])
				{
					flag = 0;
					break;
				}
			if (flag == 1)
			{
				for (k = i; k < i + j; k++)
					cout << ch[k];
				cout << endl;
			}
			flag = 1;
		}
	}
	return 0;
}
