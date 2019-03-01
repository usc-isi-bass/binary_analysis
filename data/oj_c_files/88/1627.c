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
	char c;
	int flag = 0;
	c = cin.get();
	while (c != '\n')
	{
		if (c >= '0' && c <= '9')
		{
			if (flag == 0 && c == '0')
			{
				while (c != '0')
					c = cin.get();
			}
			cout << c;
			flag = 1;
		}
		else if (flag)
		{
			cout << endl;
			flag = 0;
		}
		c = cin.get();
	}
	return 0;
}