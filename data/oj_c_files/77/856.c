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

//****************************************
//*????????                     **
//*????? 1100012762                **
//*???2011.11.22                     **
//****************************************
int flag = 0;
char str[200], ch;
void f(int i, int j)
{
	if (flag == 1)
	{
		return;
	}
	if (i < 0)
	{
		f(j, j + 1);
	}
	if (str[i] == str[0])
	{
		if (str[j] == ch)
		{
			cout << i << " " << j << endl;
			if (str[j + 1] == '\0')
			{
				flag = 1;
			}
			str[i] = str[j] = ' ';
			f(i - 1, j + 1);
		}
		else
		{
			f(j, j + 1);
		}
	}
	else
	{
		f(i - 1, j);
	}
}
int main()
{
	int i, a = 0;
	cin >> str;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != str[0])
		{
			ch = str[i];
			f (i - 1, i);
			return 0;
		}
	}
}