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
	char buff[50] = {0};
	cin.getline(buff,50);
	int len = strlen(buff);
	int num = 0;
	for (int i = 0 ; i < len ; i ++)
	{
		if (buff[i] >= '0' && buff[i] <= '9')
		{
			num = 10 * num + buff[i] - '0';
			if (buff[i + 1] == '\0')
			{
				cout << num << endl;
			}
		}
		else
		{
			if (buff[i - 1] >= '0' && buff[i - 1] <= '9')
			{
				cout << num << endl;
				num = 0;
			}
		}
	}
	return 0;
}