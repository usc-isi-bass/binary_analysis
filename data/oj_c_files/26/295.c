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

//????????
//2010?11?23?
//1000012753 ???
int main()
{
	int len, count = 0, num;
	char str[200], *p = NULL;
	cin.getline(str, 200);
	len = strlen(str);
	for (p = str; p < str + len; ++p)
	{
		if (*p == ' ' && *(p + 1) == ' ')
		{
			num = 0;
			while (*(p + 1) == ' ')
			{
				p++;
				num++;
			}
			*(p - num + 1) = '\0';
			strcat(str, p + 1);
			len = len - num;
			p = p - num;
		}
	}
	cout << str << endl;
	return 0;
}