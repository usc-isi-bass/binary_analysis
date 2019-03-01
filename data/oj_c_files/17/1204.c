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
	for (char c[101]; cin.getline(c, 101);)
	{
		char a[101] = { ' ' };
		int len = strlen(c), cnt = 0, left[101] = { 0 };
		for (int i = 0; i < len; i++)
		{
			if (c[i] != '(' && c[i] != ')')
				a[i] = ' ';
			else
			{
				if (c[i] == '(')
				{
					a[i] = '$';
					cnt += 1;
					left[cnt] = i + 1;
				}
				else
				{
					if (cnt<=0)
						a[i] = '?';
					else
					{
						a[i] = ' ';
						a[left[cnt]-1] = ' ';
						left[cnt] = 0;
						cnt -= 1;
					}
				}
			}
		}
		cout << c << endl;
		cout << a << endl;

	}
	return 0;
}
